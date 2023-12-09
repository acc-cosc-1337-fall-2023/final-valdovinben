#include "die.h"

class Roll {
private:
    Die& die1;
    Die& die2;
    bool rolled;
    int value;

public:
    Roll(Die& d1, Die& d2); 
    void roll_dice(); 
    int roll_value() const; 
};


