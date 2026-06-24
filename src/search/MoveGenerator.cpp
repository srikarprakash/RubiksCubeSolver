#include "MoveGenerator.h"

using namespace std;

bool MoveGenerator::isValidSuccessor(Move last, Move current)
{
    // Map each move to a face (0 to 5)
    int lastFace = static_cast<int>(last) / 3;
    int currentFace = static_cast<int>(current) / 3;

    // Prune 1: Same face moves (e.g., U followed by U')
    if (lastFace == currentFace) 
    {
        return false;
    }

    // Prune 2: Commutative moves on opposite faces.
    // U (0) and D (1) are opposite. R (2) and L (3). F (4) and B (5).
    // We only allow U before D, never D before U, to prevent duplicate branches.
    if (lastFace / 2 == currentFace / 2) 
    {
        if (currentFace < lastFace) 
        {
            return false;
        }
    }

    return true;
}

vector<Node> MoveGenerator::generateChildren(const Node& node)
{
    vector<Node> children;
    children.reserve(18); // Pre-allocate vector to prevent resize overhead

    vector<Move> allMoves =
    {
        Move::U, Move::Ui, Move::U2, Move::D, Move::Di, Move::D2,
        Move::R, Move::Ri, Move::R2, Move::L, Move::Li, Move::L2,
        Move::F, Move::Fi, Move::F2, Move::B, Move::Bi, Move::B2
    };

    for (Move move : allMoves)
    {   
        if (node.depth > 0 && !isValidSuccessor(node.lastMove, move))
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