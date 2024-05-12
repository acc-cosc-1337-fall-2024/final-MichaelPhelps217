#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "die.h"
#include "roll.h"

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