#include "die.h"
#include "roll.h"
#include <vector>
#include <ostream>

class Shooter {
private:
    std::vector<Roll*> rolls;

public:
    Roll* throw_die(Die& d1, Die& d2); 
    friend std::ostream& operator<<(std::ostream& os, const Shooter& shooter); 
    ~Shooter(); 
};


