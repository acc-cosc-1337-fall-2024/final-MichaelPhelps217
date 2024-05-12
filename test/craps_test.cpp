#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "die.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("roll_dice_test")
{
	for(int i = 10; i >= 1; i--) //Don't know why but it is making 20 tests (in sets of 2).
	{
		Die die;
    	int result = die.roll();
		REQUIRE(result >= 1);
		REQUIRE(result <= 6);
	}
}