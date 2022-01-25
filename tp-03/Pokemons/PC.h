#pragma once

#include "Pokemon.h"

#include <memory>
#include <vector>

// A poke center is associated with trainers, whose pokemon can be stored in the center if needed (for example
// when they have more pokemon than pokeballs). When a pokemon is transferred to the center, the center takes
// ownership.
class PC {
public:
    const std::vector<std::unique_ptr<Pokemon>>& pokemons() const { return _pokemons; }
    void receive(std::unique_ptr<Pokemon> pokemon) { _pokemons.emplace_back(std::move(pokemon)); }

    void give_back(Trainer& trainer, const std::string& give_back_name);

private:
    std::vector<std::unique_ptr<Pokemon>> _pokemons;
};
