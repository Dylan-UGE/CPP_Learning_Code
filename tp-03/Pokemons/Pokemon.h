#pragma once

#include <string>

// A creature that is cute and can fight other ones.
class Pokemon {
private:
    std::string _name;

public:
    Pokemon(const std::string& name)
        : _name { name } {}

    std::string name() const { return _name; }
};
