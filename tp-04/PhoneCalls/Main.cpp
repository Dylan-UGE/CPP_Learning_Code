#include "HomePhone.h"
#include "MobilePhone.h"
#include "Person.h"
#include "Phone.h"

int main() {
    Person paul { "Paul", 3 };

    HomePhone close_phone { paul, 3 };
    close_phone.ring(); // Hi! Paul on the phone.
    HomePhone far_phone { paul, -10 };
    far_phone.ring(); // This is the voicemail of Paul. Please leave a message.

    return 0;
}
