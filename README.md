# build
custom c/c++ build system written in c fixing what I don't like about ninja. (actually, it's in Nim!)
It's easy, even for large projects!: `./build topLevelMain.cpp -o MyApp.exe`

### Features

* Mac/Win/Linux C/C++ build tool
* Automatically discovers dependencies fast!
* Recompiles only necessary dependencies based on source changes
* Performs parallel builds based on total available cores
* Automatically Discovers and uses the available compiler: Visual Studio, GCC, Clang, whichever is available
* Provided as C source code
* Only a C compiler is needed
* Compiles with a single CLI script on any computer

### QuickStart

*Build the `build` tool using your system's c compiler.*

On Windows
`cmd /c build.bat` (even works from within msys2 or gitbash)

On Linux or Mac
`bash build.sh`

Usage Help
`./build -h` shows the help.
`build.exe -h` if on windows

Usage Example
`./build ../myproj/main.cpp -o myproj.exe --cflags "-std=c++14" --lflags "-pthread"`
The above commannd automatically discovers dependencies from recursively inspecting `main.cpp` and builds them using as many threads as your hardware supports.

### Motivation

* We needed a custom build tool aware of project structure for another reason
* We wanted to avoid dependencies (python, ninja, basil, etc.) to ease end developer experience
* The Ninja build system takes too long to do automtaic dependency discovery

### Notes

* The `src` dir contains the C sources for each possible system
* The `metasrc` dir contains the original nim sourcecode

### To Do

* Collapse source code into since cross-platform source directory using precompiler directives and defines to differentiate
* Perform simple precompiler parsing to correctly follow dependencies that arise from precompiler commands
