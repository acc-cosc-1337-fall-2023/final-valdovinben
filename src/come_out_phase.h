
#include "phase.h"

class Roll;

class ComeOutPhase : public Phase {
public:
    RollOutcome get_outcome(Roll* roll) override;
};


