#include "DFS.h"
#include "MoveGenerator.h"

using namespace std;

bool DFS::search(Node node,
                 int maxDepth,
                 vector<Move>& solution)
{
    if(node.cube.isSolved())
    {
        solution = node.path;

        return true;
    }

    if(node.depth >= maxDepth)
    {
        return false;
    }

    MoveGenerator generator;

    vector<Node> children =
        generator.generateChildren(node);

    for(Node child : children)
    {
        if(search(child,
                  maxDepth,
                  solution))
        {
            return true;
        }
    }

    return false;
}