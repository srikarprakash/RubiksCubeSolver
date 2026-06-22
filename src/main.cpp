#include "cube/Cube.h"
#include <iostream>

using namespace std;

int main()
{
Cube cube;

cube.applyMove(Move::R);
cube.applyMove(Move::U);
cube.applyMove(Move::F2);
cube.applyMove(Move::Di);

cube.printMoveHistory();

    return 0;
}