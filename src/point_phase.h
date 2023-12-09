

#include "phase.h"

class Roll;

class PointPhase : public Phase {
private:
    int point;

public:
    PointPhase(int p);
    RollOutcome get_outcome(Roll* roll) override;
};


