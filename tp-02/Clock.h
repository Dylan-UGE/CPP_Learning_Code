#pragma once

#include "Event.h"
#include "MinuteHand.h"
#include "Parsing.h"
#include "SecondHand.h"

#include <iostream>
#include <vector>

class Clock {
private:
    SecondHand&        _sec_hand;
    MinuteHand&        _min_hand;
    std::vector<Event> _events;

public:
    Clock(SecondHand& _sec_hand, MinuteHand& _min_hand);
    void assign_events(const std::vector<Event>& events);
    void add_event(const Event& event);
    void tick();

    friend std::ostream& operator<<(std::ostream& stream, const Clock& clock);
};