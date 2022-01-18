#include "letter_count_v2.h"

Histogram::Histogram() {
}

Histogram::Histogram(const Histogram& other)
    : _count { other._count } {
    std::cout << _count[0] << " ";
    std::cout << other._count[0] << std::endl;
}

int main() {
    Histogram h1, h2;
    Histogram h3 { Histogram { h1 } };

    return 0;
}

void Histogram::analyze(const std::string& word) {
    for (auto letter : word) {
        if (letter >= 'a' && letter <= 'z') {
            _count[letter - 'a'] += 1;
        }
    }
}

void Histogram::print() const {
    for (auto letter = 'a'; letter != 'z' + 1; letter += 1) {
        std::cout << letter << _count[letter - 'a'] << std::endl;
    }
}