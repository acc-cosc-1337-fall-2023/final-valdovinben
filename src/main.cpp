#include <iostream>
#include <cstdlib>
#include "die.h"
#include "shooter.h"
#include "come_out_phase.h"
#include "point_phase.h"

int main() {
    srand(static_cast<unsigned>(time(0)));

    Die die1;
    Die die2;
    Shooter shooter;

    Roll* roll = shooter.throw_die(die1, die2);

    ComeOutPhase come_out_phase;

    while (come_out_phase.get_outcome(roll) == RollOutcome::natural || come_out_phase.get_outcome(roll) == RollOutcome::craps) {
        std::cout << "Rolled value: " << roll->roll_value() << " - Roll again" << std::endl;
        delete roll; 
        roll = shooter.throw_die(die1, die2);
    }

    std::cout << "Start of point phase" << std::endl;

    int point = roll->roll_value();
    delete roll; 

    roll = shooter.throw_die(die1, die2);
    PointPhase point_phase(point);

    while (point_phase.get_outcome(roll) == RollOutcome::point || point_phase.get_outcome(roll) == RollOutcome::nopoint) {
        std::cout << "Rolled value: " << roll->roll_value() << " - Roll again" << std::endl;
        delete roll; 
        roll = shooter.throw_die(die1, die2);
    }

    std::cout << "End of point phase" << std::endl;

    
    std::cout << shooter << std::endl;

    delete roll; 

    return 0;
}




