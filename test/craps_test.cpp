#define CATCH_CONFIG_MAIN  
#include "catch.hpp"
#include "die.h"
#include "roll.h"
#include "shooter.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}



TEST_CASE("Roll Returns a Value Between 1 and 6", "[Die]") {
    Die testDie;

    
    for (int i = 0; i < 10; ++i) {
        testDie.roll();
        int result = testDie.rolledValue();
        REQUIRE(result >= 1);
        REQUIRE(result <= 6);
    }
}



TEST_CASE("Rolling Two Dice Returns a Value Between 2 and 12", "[Roll]") {
   
    Die die1;
    Die die2;
    Roll testRoll(die1, die2);
    for (int i = 0; i < 10; ++i) {
        testRoll.roll_dice();
        int result = testRoll.roll_value();
        REQUIRE(result >= 2);
        REQUIRE(result <= 12);
    }
}


TEST_CASE("Shooter Returns a Valid Roll with Result Between 2 and 12", "[Shooter]") {
    Shooter shooter;
    Die die1;
    Die die2;

    for (int i = 0; i < 10; ++i) {
        Roll* roll = shooter.throw_die(die1, die2);


        REQUIRE(roll != nullptr);

        
        int rollValue = roll->roll_value();

       
        REQUIRE(rollValue >= 2);
        REQUIRE(rollValue <= 12);
    }
}
