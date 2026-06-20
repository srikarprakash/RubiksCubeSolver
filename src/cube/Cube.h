#ifndef CUBE_H
#define CUBE_H

#include <vector>
#include <string>
#include "Moves.h"

using namespace std;

class Cube
{
private:
    vector<char> U_face;
    vector<char> D_face;
    vector<char> F_face;
    vector<char> B_face;
    vector<char> L_face;
    vector<char> R_face;
    vector<Move> moveHistory;

    void rotateFaceClockwise(vector<char>& face);

public:
    Cube();

    void display() const;
    void applyMove(Move move);
    // U moves
    void U();
    void Ui();
    void U2();

    // D moves
    void D();
    void Di();
    void D2();

    // R moves
    void R();
    void Ri();
    void R2();

    // L moves
    void L();
    void Li();
    void L2();

    // F moves
    void F();
    void Fi();
    void F2();

    // B moves
    void B();
    void Bi();
    void B2();

    bool isSolved() const;
    void reset();

    const vector<Move>& getMoveHistory() const;
};

#endif