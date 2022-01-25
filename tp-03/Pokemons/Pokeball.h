#pragma once

#include "Pokemon.h"

#include <memory>

// A ball where Pokemon sleep.
class Pokeball {
public:
    bool                     empty() const { return _pokemon == nullptr; }
    void                     store(std::unique_ptr<Pokemon> pokemon) { _pokemon = std::move(pokemon); }
    Pokemon&                 pokemon() const { return *_pokemon; }
    std::unique_ptr<Pokemon> transfert_pokemon() { return std::move(_pokemon); }

private:
    std::unique_ptr<Pokemon> _pokemon;
};