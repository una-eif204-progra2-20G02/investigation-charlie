cmake_minimum_required(VERSION 3.14)
project(sample)

set(CMAKE_CXX_STANDARD 17)
set(SOURCE_FILES main.cpp Producto.cpp Producto.h ProductoDigital.cpp ProductoDigital.h)
add_executable(sample ${SOURCE_FILES})