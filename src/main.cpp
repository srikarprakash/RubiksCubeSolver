#include <iostream>

#include "cube/Cube.h"
#include "cube/Moves.h"
#include "utils/Scrambler.h"

using namespace std;

int main()
{
    Cube cube;

    Scrambler scrambler;

    vector<Move> scramble = scrambler.generateScramble(20);

    cout << "Scramble:\n";

    for (Move move : scramble)
    {
        cout << moveToString(move) << " ";
        cube.applyMove(move);
    }

    cout << "\n\nSolved after scramble? ";

    cout << (cube.isSolved() ? "YES" : "NO") << endl;

    vector<Move> inverse =
        scrambler.generateInverse(scramble);

    cout << "\nInverse:\n";

    for (Move move : inverse)
    {
        cout << moveToString(move) << " ";
        cube.applyMove(move);
    }

    cout << "\n\nSolved after inverse? ";

    cout << (cube.isSolved() ? "YES" : "NO") << endl;

    return 0;
}