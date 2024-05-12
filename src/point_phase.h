//
#include <iostream>
#include <memory>
#include "roll.h"
#include "die.h"
#include "shooter.h"
#include "phase.h"

using std::cin; using std::cout;

#ifndef POINT_PHASE_H
#define POINT_PHASE_H

class PointPhase : Phase
{
public:
    PointPhase(int p);
    RollOutcome get_outcome(Roll* roll);

private:
    int point;
};

#endif