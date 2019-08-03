# learn-cmake-openwatcom
My attempt at learning how to configure a Cmake project to cross compile towards Dos with OpenWatcom.

Apparently it worked for me!

## Requirements
* OpenWatcom
* Cmake installed (I used the one that came bundled with Visual Studio 2017 CE)
* DosBox for testing

## How to use
On Windows just execute the setup_watcom_dos.bat file.
It will use Toolchain-dos.cmake both to set cmake for cross compilation and the correct compilation flags.
By default CMAKE will make openwatcom use flags to compile for NT.

## Limits of this approach
* Currently it has been tested with only one file and without library support
* Toolchain-dos.cmake is a copy of the openwatcom cmake script and is not the correct way to use the tool!
