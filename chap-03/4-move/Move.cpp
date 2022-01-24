#include <iostream>
#include <memory>

void display(const std::string& variable_name, const std::unique_ptr<int>& variable) {
    std::cout << variable_name << " : " << *variable << std::endl;
}

std::unique_ptr<int> passthrough(std::unique_ptr<int> i) {
    auto tmp = std::move(i);

    return tmp;
}

int main() {
    std::unique_ptr<int> i1 = std::make_unique<int>(5);
    std::unique_ptr<int> i2 = std::make_unique<int>(10);

    display("i1", i1);
    i2 = passthrough(std::move(i1));
    display("i1", i1);

    return 0;
}