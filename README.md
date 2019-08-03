# learn-cmake-openwatcom
My attempt at learning how to configure a Cmake project to cross compile towards Dos with OpenWatcom.

Apparently it worked for me!

## requirements
OpenWatcom installed
Cmake installed (I used the one that came bundled with Visual Studio 2017 CE)
For testing the compiled DOS executable, DosBox with the correct directory properly mounted

## how to use
On Windows just execute the setup_watcom_dos.bat file

It will use Toolchain-dos.cmake

## limits of this approach
* Currently it has been tested with only one file and without library support
* The other problem is that Toolchain-dos.cmake is a copy of the openwatcom cmake script with just a few settings to add the correct compilation flags (by default openwatcom on windows uses the nt flag) and the system causeway directive
