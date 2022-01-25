#pragma once

#include <string>

class Trainer;

// A creature that is cute and can fight other ones.
class Pokemon {
private:
    std::string _name;
    Trainer*    _trainer = nullptr;

public:
    Pokemon(const std::string& name)
        : _name { name } {}

    std::string name() const { return _name; }
    Trainer*    trainer() { return _trainer; }
    void        set_trainer(Trainer* trainer) { _trainer = trainer; }
};
