//
#include "die.h"
#include "roll.h"
#include "shooter.h"

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
	Roll roll(die1, die2);
	Shooter shooter;

	shooter.throw_dice(die1, die2);
	shooter.throw_dice(die1, die2);
	shooter.throw_dice(die1, die2);
	shooter.display_rolled_values();


	roll.roll_dice();
	cout << "Rolled value (of two die): " << roll.roll_value() << "\n"; //std::endl
    return 0;
}