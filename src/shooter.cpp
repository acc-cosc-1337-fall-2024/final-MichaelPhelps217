//
#include "shooter.h"

Roll* Shooter::throw_dice(Die& die1, Die& die2)
{
    Roll *r = new Roll(die1, die2);
    r->roll_dice();
    rolls.push_back(r);
    return r;
}

void Shooter::display_rolled_values()
{
    //std::vector<Roll*>::iterator it = rolls.begin();
    for(auto it : rolls)
    {
        cout << it->roll_value() << " ";
    }
    cout << "\n";
}

Shooter::~Shooter()
{
    //cout << "Shooter destructor\n";
    for(auto it : rolls)
    {
        delete it;
    }
}