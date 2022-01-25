#pragma once

#include "PC.h"

#include <string>

// A person that capture Pokemons and make them fight.
class Trainer {
public:
    Trainer(const std::string& name, PC pc)
        : _name { name }
        , _pc { pc } {}

private:
    std::string _name;
    PC          _pc;
};
