cmake_minimum_required(VERSION 3.26)
project(AdventOfCode21)

set(CMAKE_CXX_STANDARD 17)

add_executable(AdventOfCode21 main.cpp)

include_directories(C:/Dev/Libraries/Functions)
include_directories(C:/Dev/Libraries/GraphPathfinding)

# Link your executable with the library
target_link_libraries(AdventOfCode21 PRIVATE C:/Dev/Libraries/Functions/libFunctions.a)
target_link_libraries(AdventOfCode21 PRIVATE C:/Dev/Libraries/GraphPathfinding/cmake-build-debug/libgraph.a)