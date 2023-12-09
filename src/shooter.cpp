#include "shooter.h"
#include <ostream>


Roll* Shooter::throw_die(Die& d1, Die& d2) {
    
    Roll* roll = new Roll(d1, d2);
    
    roll->roll_dice();
    
    rolls.push_back(roll);
    
    return roll;
}


std::ostream& operator<<(std::ostream& os, const Shooter& shooter) {
    for (const auto& roll : shooter.rolls) {
        os << *roll << "\n";
    }
    return os;
}


Shooter::~Shooter() {
    for (auto& roll : rolls) {
        delete roll;
    }
    rolls.clear(); 
}
