#include <array>
#include <list>
#include <stack>
#include <string>
#include <vector>

enum Fruit {
    Apricot,
    Cherry,
    Mango,
    Raspberry,

    Fruit_Count,
};

void try_arrays() {
    std::array<std::string, Fruit_Count> fruits;
    fruits[Apricot]   = "apricot";
    fruits[Cherry]    = "cherry";
    fruits[Mango]     = "mango";
    fruits[Raspberry] = "raspberry";
}

void try_lists() {
    std::list<int> l1 { 5, 4, 6, 2, 7 };
    std::list<int> l2 { 4, 2, 3, 6, 4 };
    std::list<int> l3 { 7, 8, 9, 3, 1 };
    std::list<int> l4 { 1, 6, 8, 6, 5 };

    l1.sort();
    l2.sort();
    l1.merge(l2);

    l3.splice(l3.begin(), l4);
    l3.sort();

    auto mid = l1.begin();
    std::advance(mid, l1.size() / 2);
    l1.splice(mid, l3);
}

void try_stacks() {
    std::stack<int, std::vector<int>> s({ 0, 1, 2 });
}

int main() {
    try_arrays();
    try_lists();
    try_stacks();

    return 0;
}