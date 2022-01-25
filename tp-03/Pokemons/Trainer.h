#pragma once

#include "PC.h"
#include "Pokeball.h"
#include "Pokemon.h"

#include <array>
#include <memory>
#include <string>

// A person that capture Pokemons and make them fight.
class Trainer {
public:
    Trainer(const std::string& name, PC& pc)
        : _name { name }
        , _pc { pc } {}

    std::string                    name() const { return _name; }
    const std::array<Pokeball, 6>& pokeballs() { return _pokeballs; }
    void                           capture(std::unique_ptr<Pokemon> pokemon) {
        pokemon->set_trainer(this);

        for (auto i = 0; i != 6; i++) {
            if (_pokeballs[i].empty()) {
                _pokeballs[i] = Pokeball();
                _pokeballs[i].store(std::move(pokemon));
            }
        }

        if (pokemon != nullptr) {
            _pc.receive(std::move(pokemon));
        }
    }

    void store_in_pc(int index) {
        if (0 >= index && index <= 5) {
            _pc.receive(_pokeballs[index].transfert_pokemon());
        }
    }

private:
    std::string             _name;
    PC&                     _pc;
    std::array<Pokeball, 6> _pokeballs;
};
