#include "cube/Cube.h"
#include <iostream>

using namespace std;

int main()
{
    Cube cube;

    cube.R();
cube.Ri();

cube.L();
cube.Li();

cube.F();
cube.Fi();

cube.B();
cube.Bi();

cout << cube.isSolved();

    return 0;
}