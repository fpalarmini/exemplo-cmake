# exemplo-cmake
exemplo minimo com cmake

## Para testar

mkdir build 

cd build

cmake ..

ou com ninja:

cmake -G Ninja ../

ninja build.ninja all

## clang-format:
sudo apt-get install clang-format

clang-format -style=llvm -dump-config > .clang-format

-style= google | chromium | mozilla | webkit | microsoft | llvm

clang-format -i source/*.cpp

## clang-tidy:
clang-tidy --checks="read*,performance*,hicpp*,modern*" *.cpp


## Adicionando clang-tidy no cmake(CMakeLists.txt): 
set(CMAKE_CXX_CLANG_TIDY clang-tidy; -header-filter=.; -checks=*,-fuchsia*,-llvm-header-guard;-warning-as-error=*;)
