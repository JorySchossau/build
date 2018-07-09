# build
custom c/c++ build system written in c* fixing what I don't like about ninja. (* actually, in Nim!)

### QuickStart

Build the `build` tool using your system's c compiler. Helper scripts in the root folder are provided. Run them as `bash build_linux_gcc.sh` for example.

`./build -h` shows the help.

### Motivation

* We needed a custom build tool aware of project structure
* We wanted to avoid dependencies (python, ninja, basil, etc.)
* the Ninja build system takes too long to do automtaic dependency discovery

### Notes

* The `src` dir contains preconfigured sources for each system (Mac,Win,Linux) and flavors of compiler setups in those systems.
* The `metasrc` dir contains the original nim sourcecode.
