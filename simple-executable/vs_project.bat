if exist _build (rmdir _build /s /q) 
    mkdir _build
cd _build
cmake -G "Visual Studio 15 2017 Win64" ..