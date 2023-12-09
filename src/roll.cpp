
#include "roll.h"
#include <cstdlib> 


Roll::Roll(Die& d1, Die& d2) : die1(d1), die2(d2), rolled(false), value(0) {}


void Roll::roll_dice() {
   
    die1.roll();
    die2.roll();

   
    value = die1.rolledValue() + die2.rolledValue();

    
    rolled = true;
}


int Roll::roll_value() const {
    return value;
}
