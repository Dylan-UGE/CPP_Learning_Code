#include "Cat.h"

int main() {
    std::unique_ptr<Cat> cat = std::make_unique<Cat>("Louis");
    std::cout << *cat << std::endl;

    std::unique_ptr<Cat> empty_cat;
    if (empty_cat == nullptr) {
        std::cout << "Null pointer" << std::endl;
    }

    empty_cat = std::make_unique<Cat>("Pixel");

    std::cout << "Same pointer ? " << ((cat == empty_cat) ? "True" : "False") << std::endl;
    std::cout << "Same name ? " << ((*cat == *empty_cat) ? "True" : "False") << std::endl;

    cat.reset();
    std::cout << "cat == nullptr ? " << ((cat == nullptr) ? "True" : "False") << std::endl;

    return 0;
}