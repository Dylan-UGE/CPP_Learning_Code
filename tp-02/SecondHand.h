#pragma once

#include "MinuteHand.h"

class SecondHand {
private:
    int         _seconds = 0;
    MinuteHand& _min_hand;

public:
    SecondHand(MinuteHand& min);
    int  get_seconds();
    void advance();
};