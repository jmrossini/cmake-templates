# SDL2 CMake

## Notes
Alternative [CMake modules](https://gitlab.com/aminosbh/sdl2-cmake-modules).

## Requirement
-  C/C++ Compiler _(pick your poison)_ [Clang](https://releases.llvm.org/download.html), [GCC](https://gcc.gnu.org/releases.html), [MSVC](https://visualstudio.microsoft.com/vs/)

- SDL2 [Repository](https://github.com/spurious/SDL-mirror) / [Installer](https://www.libsdl.org/download-2.0.php)

## Build project

#### Windows - Visual Studio
```console
mkdir build && cd build
cmake -G "Visual Studio 15 2017 Win64" ..
```
#### Linux
Add ```-DCMAKE_BUILD_TYPE=Release``` for Release build.
```console
mkdir build && cd build
cmake -G "Unix Makefiles" ..
make
```