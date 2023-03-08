cmake_minimum_required(VERSION 3.10)

project(GORAL VERSION 1.0)

file( GLOB LIB_SOURCES *.cpp )
file( GLOB LIB_HEADERS *.h )
add_library( Library ${LIB_SOURCES} ${LIB_HEADERS} )

add_executable(main main.cpp)
target_link_libraries( main Library )

