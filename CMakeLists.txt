# versao minimal para rodar cmake
cmake_minimum_required(VERSION 3.5)

# nome do projeto
project(cmake_teste)

# setando tipo da compilacao
set(CMAKE_BUILD_TYPE Release)

# diretorio onde estao os .h do projeto
include_directories(source)

# padrao c++11 do c++
set(CMAKE_CXX_STANDARD 11)

# pegando todos os fontes .cpp
file(GLOB SOURCES "source/*.cpp")

# gerando o binario cmake_teste
add_executable(cmake_teste ${SOURCES})

