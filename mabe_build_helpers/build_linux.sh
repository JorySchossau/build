echo "place this and the build executable in the root mabe dir"
./build main.cpp -o mabe -c "-D_ENABLE_ATOMIC_ALIGNMENT_FIX" -l "-pthread"
