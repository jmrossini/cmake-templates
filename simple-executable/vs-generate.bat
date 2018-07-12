if exist _build (rmdir _build /s /q) 
    mkdir _build
cd _build
cmake "Visual Studio 15" ..