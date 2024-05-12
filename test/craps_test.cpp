#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "die.h"
#include "roll.h"
#include "shooter.h"
#include "point_phase.h"
#include "come_out_phase.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("roll_dice_test")
{
	for(int i = 10; i >= 1; i--)
	{
		Die die;
    	int result = die.roll();
		REQUIRE(result >= 1);
		REQUIRE(result <= 6);
	}
}

TEST_CASE("roll_dice_test2")
{
	for(int i = 10; i >= 1; i--)
	{
		Die die1;
		Die die2;
		Roll roll(die1, die2);

		roll.roll_dice();
    	int result = roll.roll_value();
		REQUIRE(result >= 2);
		REQUIRE(result <= 12);
	}
}

TEST_CASE("roll_dice_test3")
{
	for(int i = 10; i >= 1; i--)
	{
		Die die1;
		Die die2;
		Shooter shooter;
		Roll* r = shooter.throw_dice(die1, die2);

		REQUIRE(r->roll_value() >= 2);
		REQUIRE(r->roll_value() <= 12);
	}
}

TEST_CASE("roll_dice_test4")
{
		Die die1;
		Die die2;
		Shooter shooter;
		Roll* r = shooter.throw_dice(die1, die2);
		ComeOutPhase cop;

		//the test outcomes (in the terminal) will be integer representation of the enum.
		r->set_rolled_value(7);
		Phase::RollOutcome ro = cop.get_outcome(r);
		REQUIRE(ro == Phase::RollOutcome::natural);

		r->set_rolled_value(2);
		ro = cop.get_outcome(r);
		REQUIRE(ro == Phase::RollOutcome::craps);

		r->set_rolled_value(4);
		ro = cop.get_outcome(r);
		REQUIRE(ro == Phase::RollOutcome::point);
}