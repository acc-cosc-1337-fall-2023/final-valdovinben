// Die.cpp

#include "die.h"
#include <cstdlib>


Die::Die() {
    
    currentValue = 1;
}

// Roll the die
void Die::roll() {
    
    currentValue = rand() % 6 + 1;
}

// Get the current value of the die
int Die::rolledValue() const {
    return currentValue;
}
