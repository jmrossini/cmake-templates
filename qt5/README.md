# Qt5 CMake

## Notes
Qt5 have some nice integration with CMake, check the [Manual](https://doc.qt.io/qt-5/cmake-manual.html) for more info.\
**CMake Minimum version 3.1.0**


## Requirement
-  C/C++ Compiler _(pick your poison)_ [Clang](https://releases.llvm.org/download.html), [GCC](https://gcc.gnu.org/releases.html), [MSVC](https://visualstudio.microsoft.com/vs/)
- [CMake](https://cmake.org/download/)
- [Qt5](https://qt.io/download)


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