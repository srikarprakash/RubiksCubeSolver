#include <iostream>

#include "database/StateDatabase.h"
#include "solver/DatabaseSolver.h"

using namespace std;

int main()
{
    StateDatabase db;

    db.load("database.bin");

    Cube cube;

    cube.applyMove(Move::R);
    cube.applyMove(Move::U);
    cube.applyMove(Move::F);
    cube.applyMove(Move::L);
    cube.applyMove(Move::D);
    cube.applyMove(Move::B);
    cube.applyMove(Move::R);
    cube.applyMove(Move::U);
    cube.applyMove(Move::F);
    cube.applyMove(Move::L);
    cube.applyMove(Move::D);
    cube.applyMove(Move::B);

    DatabaseSolver solver(&db);

    vector<Move> solution =
        solver.solve(cube);

    cout
        << "Solution Length: "
        << solution.size()
        << "\n";

    return 0;
}