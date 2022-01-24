#include "Clock.h"
#include "MinuteHand.h"
#include "Parsing.h"
#include "SecondHand.h"

#include <chrono>
#include <thread>

// You can call the program with the following command in order to queue 3 events at 2s, 1m3s and 10m :
// tp2-reminders.exe "0:2 This is the first reminder" "1:3 This is the second one" "10:0 And the last"

int main(int argc, char** argv) {
    const auto events = parse_events(argc, argv);

    MinuteHand min_hand;
    SecondHand sec_hand(min_hand);
    Clock      clock(sec_hand, min_hand);

    clock.assign_events(events);

    const auto program_duration = 15;
    for (int i = 0; i < program_duration; ++i) {
        clock.tick();
        std::this_thread::sleep_for(std::chrono::seconds(1));
    }

    return 0;
}
