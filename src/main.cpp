#include <iostream>

#include "solver/Solver.h"
#include "database/StateDatabase.h"

using namespace std;

int main()
{
    StateDatabase db;

    db.load("database.bin");

    Cube cube;

    cube.applyMove(Move::R);
    cube.applyMove(Move::U);
    cube.applyMove(Move::F);
    cube.applyMove(Move::R);
    cube.applyMove(Move::U);
    cube.applyMove(Move::F);

    cout
        << "Distance: "
        << db.getDistance(cube)
        << "\n";

    return 0;
}