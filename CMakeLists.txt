cmake_minimum_required(VERSION 3.10)

project(RubiksCubeSolver)

set(CMAKE_CXX_STANDARD 17)

add_executable(
    RubiksCubeSolver

    src/main.cpp

    src/cube/Cube.cpp

    src/solver/Solver.cpp

    src/search/IDAStar.cpp

    src/utils/Scrambler.cpp

    src/visualizer/Visualizer.cpp
)