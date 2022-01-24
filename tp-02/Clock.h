#pragma once

#include "MinuteHand.h"
#include "SecondHand.h"

#include <iostream>

class Clock {
private:
    SecondHand& _sec_hand;
    MinuteHand& _min_hand;

public:
    Clock(SecondHand& _sec_hand, MinuteHand& _min_hand);
    void tick();

    friend std::ostream& operator<<(std::ostream& stream, const Clock& clock);
};