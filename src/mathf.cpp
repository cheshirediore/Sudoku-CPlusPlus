#include "mathf.h"

namespace sudoku {
    namespace mathf {
        int CoordinatesToIndex(int x, int y) {
            try {
                if (x < 0 || x > 8)
                {
                    throw std::invalid_argument("x");
                }
                if (x < 0 || x > 8)
                {
                    throw std::invalid_argument("y");
                }
                return y * 9 + x;
            }
            catch (const std::invalid_argument& ia) {
                std::cerr << "Invalid argument: " << ia.what() << '\n';
                return -1;
            }
        }

        int* IndexToCoordinates(int index) {
            int x, y;
            int* coordinates = new int [2] {-1, -1};

            try {
                if (index < 0 || index > 80)
                {
                    throw std::invalid_argument("index");
                }   
                
                x = index % 9;
                y = index / 9;

                coordinates[0] = x;
                coordinates[1] = y;
            }
            catch (const std::invalid_argument& ia) {
                std::cerr << "Invalid argument: " << ia.what() << '\n';
            }
            
            return coordinates;
        }
    }
}