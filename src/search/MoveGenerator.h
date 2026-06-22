#ifndef MOVEGENERATOR_H
#define MOVEGENERATOR_H

#include "Node.h"
#include <vector>

using namespace std;

class MoveGenerator
{
public:
    vector<Node> generateChildren(const Node& node);
    bool isInverseMove(Move a, Move b);
};

#endif