#include <iostream>

#include "search/DFS.h"
#include "search/Node.h"
#include "cube/Moves.h"

using namespace std;

int main()
{
    Node root;

    root.cube.applyMove(Move::R);

    DFS dfs;

    vector<Move> solution;

    bool found =
        dfs.search(root,
                   1,
                   solution);

    cout << "Found: "
         << found
         << endl;

    if(found)
    {
        cout << "Solution:\n";

        for(Move move : solution)
        {
            cout << moveToString(move)
                 << " ";
        }

        cout << endl;
    }

    return 0;
}