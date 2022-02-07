#include <iostream>
#include <string>
#include <tuple>

std::tuple<bool, const int, const int> parse_params(int argc, const char* const* argv) {
    int numerator, denominator;

    if (argc != 3) {
        std::cerr << "Program expects 2 parameters!" << std::endl;
        return std::tuple { false, 0, 0 };
    }

    std::string num_str = argv[1];
    std::string den_str = argv[2];

    try {
        numerator   = std::stoi(num_str);
        denominator = std::stoi(den_str);
    }
    catch (const std::exception&) {
        std::cerr << "Program expects 2 integer parameters!" << std::endl;
        return std::tuple { false, 0, 0 };
    }

    if (denominator == 0) {
        std::cerr << "Denominator cannot be null!" << std::endl;
        return std::tuple { false, 0, 0 };
    }

    return std::tuple { true, numerator, denominator };
}

std::tuple<const int, const int> divide(int numerator, int denominator) {
    int reminder = numerator % denominator;
    return std::tuple { numerator / denominator, reminder };
}

int main(int argc, char** argv) {

    std::tuple<bool, int, int> res = parse_params(argc, argv);
    if (!std::get<0>(res)) {
        return 1;
    }

    std::tuple<int, int> res2 = divide(std::get<1>(res), std::get<2>(res));

    std::cout << std::get<1>(res) << " = " << std::get<2>(res) << " * " << std::get<0>(res2) << " + "
              << std::get<1>(res2) << std::endl;

    return 0;
}