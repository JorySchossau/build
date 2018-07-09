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
* Only a C compmiler is needed

### QuickStart

Build the `build` tool using your system's c compiler.
Helper scripts in the root folder are provided for Mac/Win/Linux (assuming you have a c compiler).
Run them as `bash build_linux_gcc.sh` for example.

`./build -h` shows the help.

Example
`./build ../myproj/main.cpp -o myproj.exe --cflags "-std=c++14" --lflags "-pthread"`
The above commannd automatically discovers dependencies from recursively inspecting `main.cpp` and builds them using as many cores

### Motivation

* We needed a custom build tool aware of project structure for a different project
* We wanted to avoid dependencies (python, ninja, basil, etc.) to ease end developer experience
* The Ninja build system takes too long to do automtaic dependency discovery (well, the compilers take too long to report this)

### Notes

* The `src` dir contains preconfigured sources for each system (Mac,Win,Linux) and flavors of compiler setups in those systems.
* The `metasrc` dir contains the original nim sourcecode.

### To Do

* Collapse source code into since cross-platform source directory using precompiler directives and defines to differentiate
* Perform simple precompiler parsing to correctly follow dependencies that arise from precompiler commands
