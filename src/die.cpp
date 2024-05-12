//
#include "die.h"

//public
int Die::roll() 
{
    return (rand() % sides) + 1;
}

//private
