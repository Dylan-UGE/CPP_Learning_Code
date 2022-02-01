#pragma once

#include "Person.h"
#include "Phone.h"

#include <iostream>

class HomePhone : public Phone {
private:
    int _position;

public:
    HomePhone(const Person& owner, int position)
        : Phone { owner }
        , _position { position } {}

    void ring() const override {
        if (_position != _owner.get_position()) {
            std::cout << "This is the voicemail of ... Please leave a message." << std::endl;
        }
        else {
            _owner.answer_phone();
        }
    }
};