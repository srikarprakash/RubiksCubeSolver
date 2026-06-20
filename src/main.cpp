#include "cube/Cube.h"
#include <iostream>

using namespace std;

int main()
{
Cube cube;

cube.applyMove(Move::R);
cube.applyMove(Move::U);
cube.applyMove(Move::F);

cout << cube.getMoveHistory().size() << endl;

    return 0;
}