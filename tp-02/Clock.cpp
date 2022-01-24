#include "Clock.h"

Clock::Clock(SecondHand& sec_hand, MinuteHand& min_hand)
    : _sec_hand { sec_hand }
    , _min_hand { min_hand } {
}

void Clock::tick() {
    _sec_hand.advance();
}

std::ostream& operator<<(std::ostream& stream, const Clock& clock) {
    return stream << clock._min_hand.get_minutes() << " min " << clock._sec_hand.get_seconds() << " sec";
}

int main() {
    MinuteHand t;
    SecondHand t2(t);

    Clock test(t2, t);
    std::cout << test << std::endl;
    for (auto i = 0; i != 63; i++) {
        test.tick();
    }
    std::cout << test << std::endl;
}