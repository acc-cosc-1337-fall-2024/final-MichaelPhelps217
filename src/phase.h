//
#include <iostream>
#include <memory>
#include "roll.h"
#include "die.h"
#include "shooter.h"

using std::cin; using std::cout;

#ifndef PHASE_H
#define PHASE_H

class Phase
{
public:
    enum class RollOutcome {natural, craps, point, seven_out, nopoint}; //natural == 1, craps == 2,...
    virtual RollOutcome get_outcome(Roll* roll) = 0;
};

#endif