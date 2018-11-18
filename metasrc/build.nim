import strutils
import sequtils
import tables
import strformat
import locks
import osproc
import ospaths ## changeFileExt
import os ## paramStr, walkFiles, sleep

var
    threads:seq[Thread[tuple[compiler,cflags,maindir,srcfile,objdir,objfile:string,threadi:int]]]
type
    FileTypes {.pure.} = enum
        Header, Source
    Dependency = ref object
        filetypes:set[FileTypes]
        pathSource,pathHeader:string
        dirSource,dirHeader:string
        #uuidSource,uuidHeader:string
        started:bool
        finished:bool
        compilable:bool
        dirty:bool
        dependencies:seq[string] ## All {D,d}ependencies are stored as projectPath&baseName: 'SubDirInProj/ThisFile' (no ext)
var threadlock: Lock
var threadStatus: seq[range[0..1]]
var deps = initTable[string, Dependency]()
var affDAG = initTable[string, Dependency]()
var dirCache = initTable[string, seq[tuple[fullpath:string,ext:string]]]() ## cache contents of each directory
let processorCount = countProcessors()
var availableThreads = processorCount
var runningThreads = 0 ## availableThreads + runningThreads = processorCount
var successfulCompilations = 0
var mainDir:string
var mainDirRelative:string
var objDir:string
var buildCompiler:string
var buildFlags:string
var buildLinkFlags:string

proc newDependency():Dependency =
    new result
    result.pathSource = ""
    result.pathHeader = ""
    result.dirSource = ""
    result.dirHeader = ""
    result.dependencies = newSeq[string]()
    result.started = false
    result.finished = false
    result.compilable = false
    result.dirty = false

template native(path:string):string = unixToNativePath(path)
template pathInProject(path:string):string =
    var filepath = native(expandFilename path)
    var projpath = native(mainDir / "/")
    filepath.delete(0,projpath.len-1)
    filepath

# compiler detection code below vvvvvvv
proc saveCachedEnvVars(vars:TableRef[string,string]) =
    var file = open(getAppDir() / ".cachedvcc", fmWrite)
    for key,val in vars.mpairs():
        file.writeLine fmt"{key}={val}"
    file.close()

proc loadCachedEnvVars() =
    if existsFile getAppDir() / ".cachedvcc":
        let contents = readFile getAppDir() / ".cachedvcc"
        for line in splitLines(contents.strip()):
            putEnv( line.split('=')[0], line.split('=')[1] )

let possibleVcVars =
  ["""C:\Program Files (x86)\Microsoft Visual Studio\2017\Professional\VC\Auxiliary\Build\vcvars64.bat""",
  """C:\Program Files (x86)\Microsoft Visual Studio\2017\Community\VC\Auxiliary\Build\vcvars64.bat""",
  """C:\Program Files (x86)\Microsoft Visual Studio\2017\Enterprise\VC\Auxiliary\Build\vcvars64.bat""",
  """C:\Program Files (x86)\Microsoft Visual Studio\2017\BuildTools\VC\Auxiliary\Build\vcvars64.bat""",
  """C:\Program Files (x86)\Microsoft Visual Studio 14.0\VC\bin\amd64\vcvars64.bat"""]
let possibleNixCompilers = ["gcc","g++","c++","clang"]
proc getAvailableCompilers():seq[string] =
    result = newSeq[string]()
    var which:string = "which"
    when defined windows:
        which = "where"
        for vcvars in possibleVcVars:
            if existsFile vcvars:
                result.add "vcc"
    for compiler in possibleNixCompilers:
        if execCmdEx(fmt"{which} {compiler}")[1] == 0: result.add compiler

template makeCompileToObjString(compiler,flags,src,obj:string):string =
    var result:string
    case compiler:
        of "vcc":
            result = "cl $1 /c /Fo$2 $3" % [flags,obj.changeFileExt("obj"),src] ## TODO: allow debug builds
        of "c++","g++","clang","gcc":
            result = "$1 $2 -o $3 -c $4" % [compiler, flags, obj, src] ## TODO: allow c++14 flags or alternatives
    result

template makeCompileToExeString(compiler,linkFlags,targetFile,objdir:string):string =
    var result:string
    case compiler:
        of "vcc":
            result = "link $1 $2 /out:$3" % [linkFlags, objdir / "*.obj", targetFile] ## TODO: allow debug builds AND linker flags
            echo result
        of "c++","g++","clang","gcc":
            result = "$1 -o $2 $3 $4" % [compiler, targetFile, objdir / "*.o", linkFlags] ## TODO: allow c++14 flags or alternatives
    result

proc prepareVCCenvironment() =
    if existsFile getAppDir() / ".cachedvcc":
        loadCachedEnvVars()
    if execCmdEx("where cl")[1] != 0:
        echo "No VCC environment cached. Caching VCC environment..."
        var cmd:string
        for vcvars in possibleVcVars:
            if existsFile vcvars:
                cmd = vcvars
                break
        ## TODO: if cmd == "", then tell user they need to specify the path on the command line
        var output = execProcess(cmd & " && set")
        var vars = newTable[string,string]()
        for line in splitLines output:
            case line.split('=')[0]:
                of "INCLUDE","Path","PATH","LIB","LIBPATH":
                    vars[line.split('=')[0]] = line.split('=')[1]
        saveCachedEnvVars(vars)
    loadCachedEnvVars()
    if execCmdEx("where cl")[1] != 0:
        echo "Error: VCC environment unable to be found or loaded."
        quit()
# compiler detection code above ^^^^^^^^^^^^^^

proc buildThread(args:tuple[compiler,cflags,maindir,srcfile,objdir,objfile:string,threadi:int]) {.thread.} =
    let localBuildString = makeCompileToObjString(args.compiler, args.cflags, args.maindir / args.srcfile, args.objdir / args.objfile)
    let localDisplayString = makeCompileToObjString(args.compiler, args.cflags, args.srcfile, args.objfile)
    echo localDisplayString
    let (stdout, stderr) = execCmdEx(localBuildString)
    if stderr != 0:
        echo stderr
        echo stdout
        quit()
    acquire threadlock
    {.gcsafe.}:
        deps[args.srcfile.changeFileExt("")].finished = true
        inc availableThreads
        dec runningThreads
        inc successfulCompilations
        threadStatus[args.threadi] = 0
    release threadlock

proc getDependencies(file:string):seq[string] =
    result = newSeq[string]()
    var subline:string
    var pos1,pos2:Natural
    var nospaceline:string
    for line in lines mainDir / file:
        nospaceline = line.replace(" ","") ## remove all spaces
        if nospaceline.startsWith '#':
            if nospaceline.startsWith "#include":
                subline = nospaceline[8..high(nospaceline)]
                if subline.startsWith '"':
                    pos1 = 1
                    pos2 = subline.find('"', 1)
                    result.add( pathInProject(mainDir / file.splitPath.head / subline[pos1 ..< pos2]) )

proc addFileAndDependencies(file:string) =
    var keyName = file.splitFile[0] / file.splitFile[1] ## parent dir / name (no extension)
    if deps.contains keyName:
        return
    var subdeps = newSeq[string]()
    var parent = parentDir mainDir / file
    var extOfOtherFile:string ## If file is Data.h, then extOfOtherFile is cpp or c or CPP, etc.
    deps[keyName] = newDependency()
    if splitFile(file)[2][0..1].toLowerAscii == ".h": ## `file` is a {h,hpp} header file
        deps[keyName].pathHeader = file
        deps[keyName].filetypes.incl FileTypes.Header
        subdeps = subdeps.concat getDependencies(file)
        for ext in @["c","cpp","cc","C","cxx","c++"]:
            if existsFile(mainDir / file.changeFileExt(ext)):
                extOfOtherFile = ext
                break
        if extOfOtherFile.len != 0: ## we found a source file
            deps[keyName].pathSource = pathInProject(mainDir / file.changeFileExt(extOfOtherFile))
            deps[keyName].filetypes.incl FileTypes.Source
            subdeps = subdeps.concat getDependencies(file.changeFileExt(extOfOtherFile))
    else: ## `file` is a cpp or c source file
        deps[keyName].pathSource = pathInProject(mainDir / file)
        deps[keyName].filetypes.incl FileTypes.Source
        subdeps = subdeps.concat getDependencies(file)
        for ext in @["h","hpp","hh","H","hxx","hpp","h++"]:
            if existsFile(mainDir / file.changeFileExt(ext)):
                extOfOtherFile = ext
                break
        if extOfOtherFile.len != 0: ## we found a source file
            deps[keyName].pathHeader = pathInProject(mainDir / file.changeFileExt(extOfOtherFile))
            deps[keyName].filetypes.incl FileTypes.Header
            subdeps = subdeps.concat getDependencies(file.changeFileExt(extOfOtherFile))
    for projectPathSubDepName in subdeps:
        if projectPathSubDepName.changeFileExt("") != keyName:
            deps[keyName].dependencies.add projectPathSubDepName.changeFileExt("")
            addFileAndDependencies(projectPathSubDepName)
    #echo fmt"{file}: {$subdeps}"

proc recursivelyBuildAffectiveDAG(affDAG:var Table[string,Dependency], file:string, traceNodes:var seq[string]) =
    ## file: current file we're crawling in the dependency DAG
    ## affDAG: the affective DAG we're building (modifying file x will affect files a,b, and c downstream in the compile process)
    ## traceNodes: downstream affected files relative to file (recusive calls to this fn still on the stack)
    ## traceNodes is not meant to be set on the root call of this fn
    discard affDAG.hasKeyOrPut(file, newDependency())
    affDAG[file].pathSource = deps[file].pathSource
    affDAG[file].pathHeader = deps[file].pathHeader
    #echo fmt"DAGC:[{affDAG[file].pathSource},{affDAG[file].pathHeader}]"
    if traceNodes.len == 0:
        affDAG[file].compilable = true
        affDAG[file].dirty = false
    if affDAG[file].pathSource.len != 0 and affDAG[file].pathHeader.len != 0:
        affDAG[file].compilable = true
        affDAG[file].dirty = false
    for affectedNode in traceNodes:
        if affectedNode notin affDAG[file].dependencies:
            affDAG[file].dependencies.add affectedNode
    traceNodes.add file ## push current level node on
    for dependency in deps[file].dependencies:
        recursivelyBuildAffectiveDAG(affDAG, dependency, traceNodes)
    traceNodes.delete traceNodes.len-1 ## pop the current level off before recursing back up

proc flagChangedFilesToBeCompiled(affDAG:var Table[string,Dependency], forceAll:bool = false) =
    ## Set their dirty flags true iff source files are newer than object files (if object files exist)
    var pathobj:string
    if forceAll: ## if user asked to recompile all object files, then mark all as drity
        for eachKey,eachDep in affDAG.mpairs():
            if eachDep.compilable: eachDep.dirty = true
    else: ## only recompile object files if source files are newer
        for eachKey,eachDep in affDAG.mpairs():
            if eachDep.compilable:
                pathobj = if buildCompiler in @["vcc"]:
                    objDir / changeFileExt(eachDep.pathSource,"obj").replace($DirSep,"_")
                else:
                    objDir / changeFileExt(eachDep.pathSource,"o").replace($DirSep,"_")
                if not existsFile(pathobj):
                    eachDep.dirty = true
                else:
                    if eachDep.pathSource != "" and fileNewer(mainDir / eachDep.pathSource, pathobj):
                        eachDep.dirty = true
                        for eachSubDep in eachDep.dependencies:
                            if affDAG[eachSubDep].compilable: affDAG[eachSubDep].dirty = true
                    elif eachDep.pathHeader != "" and fileNewer(mainDir / eachDep.pathHeader, pathobj):
                        eachDep.dirty = true
                        for eachSubDep in eachDep.dependencies:
                            if affDAG[eachSubDep].compilable: affDAG[eachSubDep].dirty = true
    
proc compileAffectiveDAG(rootDep, targetName:string) =
    var compilee:string
    var nextEmptyThreadIndex:int
    var oname:string
    var numberOfDirty = 0
    for file in affDAG.keys:
        if affDAG[file].dirty: inc numberOfDirty
    while true:
        acquire threadlock
        {.gcsafe.}:
            if successfulCompilations == numberOfDirty:
                release threadlock
                break
        release threadlock
        acquire threadlock
        {.gcsafe.}:
            nextEmptyThreadIndex = threadStatus.find(0)
            compilee = ""
            for key in affDAG.keys:
                if affDAG[key].dirty:
                    compilee = key
                    break
            if nextEmptyThreadIndex != -1 and compilee.len != 0:
                affDAG[compilee].dirty = false
                threadStatus[nextEmptyThreadIndex] = 1
                oname = changeFileExt(deps[compilee].pathSource,"o").replace($DirSep,"_")
                createThread(threads[nextEmptyThreadIndex], buildThread, (buildCompiler, buildFlags, mainDirRelative, deps[compilee].pathSource, objDir, oname, nextEmptyThreadIndex))
                inc runningThreads
                dec availableThreads
                deps[compilee].started = true
                release threadlock
            else:
                release threadlock
                sleep(200)
    echo "linking..." ## TODO: show linking command just like all the compile commands
    let (stdout,stderr) = execCmdEx makeCompileToExeString(buildCompiler, buildLinkFlags, targetName, objDir)
    if stderr != 0:
        echo stderr
        echo stdout
        quit()

proc build(source:seq[string], o:string = "{source name}", compiler:string = "default", cflags:string = "", lflags:string = "", force:bool = false) =
    if source.len < 1:
        echo "root source file (ex: main.cpp) name required parameters"
        quit()
    let (dir, name, ext) = splitFile(source[0])
    let rootFileMain = name & ext
    let targetName = if o == "{source name}": name else: o
    initLock(threadlock)
    threads = newSeq[Thread[tuple[compiler,cflags,maindir,srcfile,objdir,objfile:string,threadi:int]]](processorCount)

    # compiler detection code below
    var desiredCompiler = if compiler == "default": "" else: compiler
    var decidedCompiler:string = ""
    let availableCompilers = getAvailableCompilers()
    var objExt = "o"
    if desiredCompiler == "":
        when defined windows:
            if "vcc" in availableCompilers:
                decidedCompiler = "vcc"
        if decidedCompiler == "":
            if "c++" in availableCompilers:
                decidedCompiler = "c++"
            elif "g++" in availableCompilers:
                decidedCompiler = "g++"
            elif "clang" in availableCompilers:
                decidedCompiler = "clang"
            elif "gcc" in availableCompilers:
                decidedCompiler = "gcc"
            else:
                echo "no compiler available. Please install one before using this tool."
                quit()
    elif not (desiredCompiler in availableCompilers):
        echo fmt"Error: The compiler you requested, {desiredCompiler}, does not appear to be available"
        quit()
    else: decidedCompiler = desiredCompiler
    if decidedCompiler == "vcc":
        prepareVCCenvironment()
        objExt = "obj"
    # THIS PART IS JUST FOR TESTING

    # source file compile code below
    buildCompiler = if decidedCompiler == "default": "g++" else: decidedCompiler
    #echo "cflags: "&cflags
    buildFlags = cflags
    buildLinkFlags = lflags
    echo fmt"compiling source tree of {targetName} using {processorCount} cores"
    threadStatus = newSeq[range[0..1]](processorCount)
    mainDir = parentDir expandFilename dir / name & ext
    mainDirRelative = splitPath(dir / rootFileMain).head
    objDir = splitPath(targetName).head / "objectFiles"
    createDir objDir
    addFileAndDependencies( pathInProject(dir / name & ext) )
    var traceNodes = newSeq[string]()
    recursivelyBuildAffectiveDAG(affDAG, rootFileMain.changeFileExt(""), traceNodes)
    flagChangedFilesToBeCompiled(affDAG, force)
    compileAffectiveDAG(rootFileMain.changeFileExt(""), targetName)
    echo "done"

when isMainModule:
    import cligen; dispatch(build, help = {"source":"Root source file (ex: main.cpp)",
    "o":"resulting executable name",
    "compiler":"alternative compiler ex: \"clang\",\"vcc\",\"gcc\"",
    "cflags":"define extra cflags for the build process ex: \"-std=c++14 -O3\"",
    "lflags":"define extra lflags for the build process ex: \"-lpthreads\"",
    "force":"perform a full recompile of all source files"},
    short = {"cflags":'c',"lflags":'l',"compiler":'C'})
