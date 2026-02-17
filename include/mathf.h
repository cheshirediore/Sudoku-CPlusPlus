#pragma once
#include <stdexcept>
#include <iostream>

namespace sudoku {
    namespace mathf {
        int CoordinatesToIndex(int x, int y);
        int* IndexToCoordinates(int index);
    }
}