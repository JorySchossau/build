@echo "Please run this only after running vcvars64.bat or 'vcvarsall.bat amd64' in your Visual Studio Build Tools"
@echo "This might be found in: C:\Program Files (x86)\Microsoft Visual Studio\2017\BuildTools\VC\Auxiliary\Build"
@echo "building..."
cl /w /Febuild src/src_win64_vs/*.c
@del *.obj
