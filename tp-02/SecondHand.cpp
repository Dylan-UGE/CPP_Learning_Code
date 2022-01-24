#include "SecondHand.h"

SecondHand::SecondHand(MinuteHand& min)
    : _min_hand { min } {
}

int SecondHand::get_seconds() {
    return _seconds;
}

void SecondHand::advance() {
    if (_seconds == 59) {
        _min_hand.advance();
    }

    (_seconds += 1) %= 60;
}