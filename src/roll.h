//
#include <iostream>
#include <memory>
#include "die.h"

using std::cin; using std::cout;

#ifndef ROLL_H
#define ROLL_H

class Roll
{
public:
    Roll(Die& die1, Die& die2) : die1{die1}, die2{die2} {};
    void roll_dice();
    int roll_value() const;

private:
    Die& die1;
    Die& die2;
    int rolled_value;
};


#endif