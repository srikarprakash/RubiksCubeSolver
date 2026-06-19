#include "Cube.h"
#include <iostream>

Cube::Cube()
{
    U = std::vector<char>(9, 'W');
    D = std::vector<char>(9, 'Y');
    F = std::vector<char>(9, 'G');
    B = std::vector<char>(9, 'B');
    L = std::vector<char>(9, 'O');
    R = std::vector<char>(9, 'R');
}
void Cube::display() const
{
    std::cout << "\nUP\n";

    for(int i = 0; i < 9; i++)
    {
        std::cout << U[i] << " ";

        if((i + 1) % 3 == 0)
            std::cout << "\n";
    }
}
