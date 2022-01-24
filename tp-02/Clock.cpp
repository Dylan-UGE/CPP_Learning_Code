#include "Clock.h"

Clock::Clock(SecondHand& sec_hand, MinuteHand& min_hand)
    : _sec_hand { sec_hand }
    , _min_hand { min_hand } {
}

void Clock::tick() {
    _sec_hand.advance();

    for (auto it = _events.begin(); it != _events.end();) {
        Event& event = *it;

        if (event.notify_time(_min_hand.get_minutes(), _sec_hand.get_seconds())) {
            it = _events.erase(it);
        }
        else {
            ++it;
        }
    }
}

void Clock::add_event(const Event& event) {
    _events.emplace_back(event);
}

void Clock::assign_events(const std::vector<Event>& events) {
    _events = events;
}

std::ostream& operator<<(std::ostream& stream, const Clock& clock) {
    return stream << clock._min_hand.get_minutes() << " min " << clock._sec_hand.get_seconds() << " sec";
}