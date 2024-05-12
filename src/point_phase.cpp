//
#include "point_phase.h"

PointPhase::PointPhase(int p)
{
    point = p;
}

Phase::RollOutcome PointPhase::get_outcome(Roll* roll)
{
    int value = roll->roll_value();
    if(value == point)
    {
        return Phase::RollOutcome::point;
    }
    if(value == 7)
    {
        return Phase::RollOutcome::seven_out;
    }
    return Phase::RollOutcome::nopoint;
}