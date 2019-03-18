if exist build (rmdir build /s /q) 
    mkdir build
cd build
cmake -G "Visual Studio 15 2017 Win64" ..