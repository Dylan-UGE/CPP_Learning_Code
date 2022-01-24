#include "MinuteHand.h"

int MinuteHand::get_minutes() {
    return _minutes;
}

void MinuteHand::advance() {
    (_minutes += 1) %= 60;
}