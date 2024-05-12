//
#include <iostream>
#include <memory>
#include "roll.h"
#include "die.h"
#include "shooter.h"
#include "phase.h"

using std::cin; using std::cout;

#ifndef COME_OUT_PHASE_H
#define COME_OUT_PHASE_H

class ComeOutPhase : Phase
{
public:
    RollOutcome get_outcome(Roll* roll);    
};

#endif