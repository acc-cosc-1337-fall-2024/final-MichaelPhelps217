//
#include <iostream>
#include <memory>

using std::cin; using std::cout;

#ifndef DIE_H
#define DIE_H

class Die
{
public:
    int roll();

private:
    int sides{6};
};


#endif