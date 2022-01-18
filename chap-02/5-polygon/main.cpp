#include "Polygon.h"

#include <iostream>

int main() {
    Polygon polygon;

    polygon.add_vertex(2, 3);
    polygon.add_vertex(4, 5);
    polygon.add_vertex(6, 7);
    std::cout << polygon << std::endl;

    const auto vertex = polygon.get_vertex(1);
    std::cout << "(" << vertex.first << "," << vertex.second << ")" << std::endl; // -> (4,5)

<<<<<<< HEAD
    for (auto i = 0; i < 200; ++i) {
        polygon.add_vertex(i, i * 2);
    }
=======
     for (auto i = 0; i < 200; ++i)
     {
         polygon.add_vertex(i, i * 2);
     }
>>>>>>> 75aaa8dbd1f34f6a2f482e9720405f3b103cf606

    std::cout << "(" << vertex.first << "," << vertex.second << ")" << std::endl; //-> ???

    return 0;
}
