#pragma once

#include "Animal.h"
#include "Cat.h"
#include "Chicken.h"
#include "Cow.h"
#include "Dog.h"

#include <memory>
#include <vector>

class Opera {
private:
    std::vector<std::unique_ptr<Animal>> _animals;

public:
    Opera() {
        _animals.emplace_back(std::make_unique<Dog>());
        _animals.emplace_back(std::make_unique<Cat>());
        _animals.emplace_back(std::make_unique<Cow>());
        _animals.emplace_back(std::make_unique<Chicken>());
    }

    void sing() const {
        for (const auto& animal : _animals) {
            animal->sing('\n');
        }
    }
};
