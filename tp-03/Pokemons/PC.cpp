#include "PC.h"

#include "Trainer.h"

void PC::give_back(Trainer& trainer, const std::string& give_back_name) {
    for (auto it = _pokemons.begin(); it != _pokemons.end(); ++it) {
        auto& pokemon = *it;

        if (pokemon->name() == give_back_name && pokemon->trainer() == &trainer) {
            trainer.capture(std::move(pokemon));
            _pokemons.erase(it);

            return;
        }
    }
}