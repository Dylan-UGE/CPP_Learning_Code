#include "keys.h"

#include <iostream>
#include <map>
#include <set>
#include <unordered_set>

int main() {
    std::set<ComparableDog> s;
    ComparableDog           dog { "Lassie", "Colley" };
    ComparableDog           dog2 { "Beethoven", "Saint-Bernard" };
    ComparableDog           copy_dog = dog2;

    s.emplace(dog);
    s.emplace(dog2);
    s.emplace(copy_dog);
    std::cout << s.size() << std::endl;

    std::unordered_set<HashableDog> dogs;
    HashableDog                     dog3 { "Idéfix", "chien" };
    HashableDog                     dog4 { "Snoopy", "Beagle" };

    dogs.emplace(dog3);
    dogs.emplace(dog4);
    std::cout << s.size() << std::endl;

    std::map<ComparableDog, owner> dogs_owner;
    dogs_owner.emplace(dog, owner { "Jean", "Lafève" });
    dogs_owner.emplace(dog2, owner { "Hubert", "Courch" });

    return 0;
}