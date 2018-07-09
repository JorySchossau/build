@echo "Please run this only after running vcvars64.bat or vcvarsall.bat in your Visual Studio Build Tools"
@echo "building..."
cl /w /Febuild src/src_win64_vs/*.c
@del *.obj
