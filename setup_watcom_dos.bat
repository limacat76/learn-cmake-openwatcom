mkdir build
cd build
mkdir wd
cd wd
cmake ..\.. -G "Watcom WMake" -DCMAKE_TOOLCHAIN_FILE=..\..\Toolchain-dos.cmake -DDISABLE_GOOGLE_TESTS=1
pause