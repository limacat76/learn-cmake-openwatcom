mkdir build
cd build
mkdir wd
cd wd
cmake ..\.. -G "Watcom WMake" -DCMAKE_TOOLCHAIN_FILE=..\..\Toolchain-dos.cmake
pause