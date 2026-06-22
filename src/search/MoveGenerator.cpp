#include "MoveGenerator.h"

using namespace std;

bool MoveGenerator::isInverseMove(Move a, Move b)
{
    return
    (
        (a == Move::U  && b == Move::Ui) ||
        (a == Move::Ui && b == Move::U) ||

        (a == Move::D  && b == Move::Di) ||
        (a == Move::Di && b == Move::D) ||

        (a == Move::R  && b == Move::Ri) ||
        (a == Move::Ri && b == Move::R) ||

        (a == Move::L  && b == Move::Li) ||
        (a == Move::Li && b == Move::L) ||

        (a == Move::F  && b == Move::Fi) ||
        (a == Move::Fi && b == Move::F) ||

        (a == Move::B  && b == Move::Bi) ||
        (a == Move::Bi && b == Move::B)
    );
}

vector<Node> MoveGenerator::generateChildren(const Node& node)
{
    vector<Node> children;

    vector<Move> allMoves =
    {
        Move::U, Move::Ui, Move::U2,
        Move::D, Move::Di, Move::D2,
        Move::R, Move::Ri, Move::R2,
        Move::L, Move::Li, Move::L2,
        Move::F, Move::Fi, Move::F2,
        Move::B, Move::Bi, Move::B2
    };

    for (Move move : allMoves)
    {   if (node.depth > 0 && isInverseMove(node.lastMove, move))
            {
                continue;
            }
        Node child = node;

        child.cube.applyMove(move);

        child.path.push_back(move);
        child.lastMove = move;

        child.depth++;

        children.push_back(child);
    }

    return children;
}