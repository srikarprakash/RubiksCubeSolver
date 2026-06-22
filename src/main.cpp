#include <iostream>

#include "cube/Cube.h"
#include "cube/Moves.h"
#include "utils/Scrambler.h"

using namespace std;

int main()
{
    Cube cube;

cout << "Solved State:\n";
cout << cube.encodeState() << endl;

cube.applyMove(Move::R);
cube.applyMove(Move::U);
cube.applyMove(Move::F);

cout << "\nAfter Moves:\n";
cout << cube.encodeState() << endl;

    return 0;
}