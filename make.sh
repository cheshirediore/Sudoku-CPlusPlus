#!/bin/bash

# Compiling multiple source files into executable
g++ -o ./bin/Sudoku.app \
    ./src/main.cpp \
    ./src/mathf.cpp \
    ./src/grid.cpp \
    ./src/region.cpp \
    ./src/cell.cpp \
    -I./include