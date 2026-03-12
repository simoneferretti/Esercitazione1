cmake_minimum_required(VERSION 3.20)
project(Esercitazione1)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall")

set(SOURCES file1.cpp file2.cpp file3.cpp)

add_executable(es_parametri prog_par.cpp)
add_executable(calcolo_medie calcolo_medie.cpp)


