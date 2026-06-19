#ifndef CUBE_H
#define CUBE_H

#include <vector>
#include <string>

class Cube
{
private:
    std::vector<char> U;
    std::vector<char> D;
    std::vector<char> F;
    std::vector<char> B;
    std::vector<char> L;
    std::vector<char> R;

public:
    Cube();

    void display() const;
};

#endif
