# exemplo-cmake
exemplo minimo com cmake

## Para testar

mkdir build 

cd build

cmake ..

## clang-format:
sudo apt-get install clang-format

clang-format -style=llvm -dump-config > .clang-format

-style= google | chromium | mozilla | webkit | microsoft | llvm

clang-format -i source/*.cpp
