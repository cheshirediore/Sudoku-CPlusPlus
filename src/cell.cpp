#include "cell.h"

namespace sudoku {
    Cell::Cell () : value(0) 
    { 
        // Initialize the candidates list with all 9 possible values
        candidates = std::unordered_set<unsigned short>();
        for (unsigned short i = 1; i < 10; i++)
        {
            candidates.insert(i);
        }
    }
}