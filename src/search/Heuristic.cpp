#include "Heuristic.h"

using namespace std;

int Heuristic::misplacedStickers(const Cube& cube)
{
    int count = 0;

    vector<char> U = cube.getUFace();
    vector<char> D = cube.getDFace();
    vector<char> F = cube.getFFace();
    vector<char> B = cube.getBFace();
    vector<char> L = cube.getLFace();
    vector<char> R = cube.getRFace();

    for(char c : U)
        if(c != 'W') count++;

    for(char c : D)
        if(c != 'Y') count++;

    for(char c : F)
        if(c != 'G') count++;

    for(char c : B)
        if(c != 'B') count++;

    for(char c : L)
        if(c != 'O') count++;

    for(char c : R)
        if(c != 'R') count++;

    return count;
}