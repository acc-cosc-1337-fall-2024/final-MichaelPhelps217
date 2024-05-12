//
#include "roll.h"

void Roll::roll_dice()
{
    rolled_value = die1.roll() + die2.roll();
}

int Roll::roll_value() const
{
    return rolled_value;
}

//this is for testing class Phase
void Roll::set_rolled_value(int value)
{
    rolled_value = value;
}