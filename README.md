# learn-cmake-openwatcom
My attempt at learning how to configure a Cmake project to cross compile towards Dos with OpenWatcom.

Apparently it worked for me!

## Requirements
* OpenWatcom
* Cmake installed (I used the one that came bundled with Visual Studio 2017 CE)
* Remember to keep Google Tests enabled if you want unit tests in Visual Studio
* DosBox for testing the cross-compiled dos executables

## How to use
On Windows just execute the setup_watcom_dos.bat file.
It will use Toolchain-dos.cmake both to set cmake for cross compilation and the correct compilation flags.
By default CMAKE will make openwatcom use flags to compile for NT.
Once the build\watcom_dos directory is ready you can cd there and run wmake

    cd C:\Users\cat\project-dave\learn-cmake-openwatcom\build\wd
    wmake

Open Dosbox, mount the correct directory and execute the program.

    mount c C:\Users\cat\project-dave\learn-cmake-openwatcom\build\
    C:\
    cd wd\src\hello
    hello

The new library-using example can be found under

    cd wd\src\libuser
    libuser

## Limits of this approach
* Currently it has been tested with only a few files and static library support
* Please note that google test only runs under visual studio (I am sure it will run under gcc as well)
* It has not been yet tested under linux, is it possible to use openwatcom on linux?
* Toolchain-dos.cmake is a copy of the openwatcom cmake script and is not the correct way to use the tool!
* Also the system directive is windows, I don't yet know why it won't work with Generic
