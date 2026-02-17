#include "main.h"

void test_mathf();
void test_cell();


int main()
{
    test_cell();
}

void test_mathf()
{
    std::cout << "Testing mathf.cpp" << std::endl;
    int index, x, y;
    int* coordinates;

    x = 8;
    y = 1;
    index = sudoku::mathf::CoordinatesToIndex(x, y);
    std::cout << "The index for (" << x << ", " << y << ") is " << index << std::endl;

    coordinates = sudoku::mathf::IndexToCoordinates(index);
    std::cout << "The coordinates for " << index << " are (" << coordinates[0] << ", " << coordinates[1] << ")" << std::endl;
}

void test_cell()
{
    std::cout << "Testing cell.cpp" << std::endl;

    sudoku::Cell* cell = new sudoku::Cell();

    std::cout << "Cell Value: " << cell->value << std::endl;
    std::cout << "Cell Candidates: " << std::endl;

    for (int i = 0; i <= cell->candidates.size(); i++)
    {
        if (cell->candidates.find(i) != cell->candidates.end())
        {
            std::cout << "    " << i << std::endl;
        }
    }
}