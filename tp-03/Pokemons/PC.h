#pragma once

#include "Pokemon.h"

#include <memory>
#include <vector>

// A poke center is associated with trainers, whose pokemon can be stored in the center if needed (for example
// when they have more pokemon than pokeballs). When a pokemon is transferred to the center, the center takes
// ownership.
class PC {
public:
    const std::vector<std::unique_ptr<Pokemon>>& pokemons() const { return _pc; }
    void receive(std::unique_ptr<Pokemon> pokemon) { _pc.emplace_back(std::move(pokemon)); }

private:
    std::vector<std::unique_ptr<Pokemon>> _pc;
};
