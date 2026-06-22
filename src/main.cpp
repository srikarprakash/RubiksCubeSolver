#include <iostream>

#include "search/Node.h"
#include "search/MoveGenerator.h"
#include "cube/Moves.h"

using namespace std;

int main()
{
    Node root;

root.lastMove = Move::R;
root.depth = 1;

MoveGenerator generator;

vector<Node> children =
    generator.generateChildren(root);

cout << children.size() << endl;

    return 0;
}