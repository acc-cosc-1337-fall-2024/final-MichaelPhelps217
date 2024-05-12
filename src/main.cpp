//
#include "die.h"
#include "roll.h"
#include "shooter.h"
#include "come_out_phase.h"
#include "point_phase.h"

int main() 
{
	srand(time(0));

	/*
    int result1 = die1.roll();
	int result2 = die2.roll();
    cout << "1D6 dice1 roll result: " << result1 << "\n"; //std::endl
	cout << "1D6 dice2 roll result: " << result2 << "\n"; //std::endl
	*/

	Die die1;
	Die die2;
	Shooter shooter;
	Roll* roll;
	int rolled_value;
	ComeOutPhase cop;
	Phase::RollOutcome ro;
	do
	{
		roll = shooter.throw_dice(die1, die2);
		rolled_value = roll->roll_value();
		ro = cop.get_outcome(roll);
		cout << "Rolled Value: " << rolled_value << "\n";
	} while(ro == Phase::RollOutcome::natural || ro == Phase::RollOutcome::craps);

	cout << "Start of point phase: " << rolled_value << "\n";
	cout << "Roll until rolled value or 7 is rolled\n";

	int point = roll->roll_value();
	PointPhase pp = PointPhase(point);

	do
	{
		roll = shooter.throw_dice(die1, die2);
		rolled_value = roll->roll_value();
		ro = pp.get_outcome(roll);
		cout << "Rolled Value: " << rolled_value << "\n";
	} while(ro != Phase::RollOutcome::seven_out && ro != Phase::RollOutcome::nopoint);

	cout << "End of point phase: " << rolled_value << "\n";
	shooter.display_rolled_values();
    return 0;
}