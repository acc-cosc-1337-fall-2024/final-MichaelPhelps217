//
#include <iostream>
#include <memory>
#include <vector>
#include <string>
#include "die.h"
#include "roll.h"

using std::cin; using std::cout;

#ifndef SHOOTER_H
#define SHOOTER_H

class Shooter
{
public:
    Roll* throw_dice(Die& die1, Die& die2);
    void display_rolled_values();
    ~Shooter();

private:
    std::vector<Roll*> rolls;
};


#endif