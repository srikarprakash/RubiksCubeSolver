#include "cube/Cube.h"
#include "cube/Moves.h"
#include "solver/Solver.h"
#include "solver/SolveResult.h"
#include "utils/Scrambler.h"

#include <iostream>
#include <vector>

using namespace std;

void printMoves(const vector<Move>& moves)
{
    for (Move move : moves)
    {
        cout << moveToString(move) << " ";
    }
    cout << endl;
}

int main()
{
    Solver solver;
    Scrambler scrambler;

    cout << "\n=========================================\n";
    cout << " RUBIK'S CUBE SOLVER BENCHMARK\n";
    cout << "=========================================\n";

    for (int depth = 8; depth <= 12; depth++)
    {
        cout << "\n\n#########################################\n";
        cout << "SCRAMBLE LENGTH = " << depth << endl;
        cout << "#########################################\n";

        for (int test = 1; test <= 3; test++)
        {
            Cube cube;

            vector<Move> scramble =
                scrambler.generateScramble(depth);

            for (Move move : scramble)
            {
                cube.applyMove(move);
            }

            cout << "\n-----------------------------------------\n";
            cout << "TEST #" << test << endl;
            cout << "-----------------------------------------\n";

            cout << "Scramble: ";
            printMoves(scramble);

            SolveResult result =
                solver.solve(cube);

            cout << "\nSolved: "
                 << (result.solved ? "YES" : "NO")
                 << endl;

            cout << "Solution Length : "
                 << result.solution.size()
                 << endl;

            cout << "Nodes Expanded  : "
                 << result.nodesExpanded
                 << endl;

            cout << "Solve Time (ms) : "
                 << result.solveTimeMs
                 << endl;

            cout << "Solution: ";
            printMoves(result.solution);
        }
    }

    return 0;
}