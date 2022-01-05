cmake_minimum_required(VERSION 3.1)
project(asignment-template)

set(CMAKE_CXX_STANDARD 17)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++17 -g")


include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/include)
add_library(myLib src/myLib.cpp)

add_executable( main src/main.cpp)
target_link_libraries(main myLib)
