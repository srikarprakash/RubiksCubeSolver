#include "Moves.h"

using namespace std;

string moveToString(Move move)
{
    switch (move)
    {
        case Move::U:  return "U";
        case Move::Ui: return "U'";
        case Move::U2: return "U2";

        case Move::D:  return "D";
        case Move::Di: return "D'";
        case Move::D2: return "D2";

        case Move::R:  return "R";
        case Move::Ri: return "R'";
        case Move::R2: return "R2";

        case Move::L:  return "L";
        case Move::Li: return "L'";
        case Move::L2: return "L2";

        case Move::F:  return "F";
        case Move::Fi: return "F'";
        case Move::F2: return "F2";

        case Move::B:  return "B";
        case Move::Bi: return "B'";
        case Move::B2: return "B2";
    }

    return "";
}