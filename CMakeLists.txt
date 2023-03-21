set(CMAKE_CXX_COMPILER g++)
set(CMAKE_C_COMPILER "C:/mingw64/bin/gcc")
cmake_minimum_required(VERSION 3.10)

project(GORAL)

file( GLOB LIB_SOURCES *.cpp )
file( GLOB LIB_HEADERS *.h )
add_library( Library ${LIB_SOURCES} ${LIB_HEADERS} )

add_executable(main main.cpp)
target_link_libraries( main Library )

