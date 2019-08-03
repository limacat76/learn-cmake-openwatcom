mkdir build
cd build
mkdir watcom_dos
cd watcom_dos
cmake ..\.. -G "Watcom WMake" -DCMAKE_TOOLCHAIN_FILE=..\..\Toolchain-dos.cmake
pause