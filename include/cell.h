#pragma once
#include <unordered_set>

namespace sudoku {
    class Cell
    {
        public:
            int value;
            std::unordered_set<unsigned short> candidates;
            Cell();
    };
}