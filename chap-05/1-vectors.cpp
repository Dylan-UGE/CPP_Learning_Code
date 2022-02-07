#include <algorithm>
#include <iostream>
#include <utility>
#include <vector>

int main() {
    int              array[] = { 0, 1, 2, 3, 4, 5 };
    std::vector<int> v(array, array + 6);

    for (size_t left = 0, right = v.size() - 1; left < right; ++left, --right) {
        std::swap(v[left], v[right]);
    }

    for (auto it = v.begin(); it != v.end(); it += 2) {
        it = v.emplace(it, *it);
    }

    /*std::vector<int> v2 { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    v2.erase(v2.begin() + 2, v2.begin() + 7);
    auto find = std::find(v2.begin(), v2.end(), 9);
    if (find != v2.end()) {
        v2.erase(find);
    }*/

    for (auto it = v.begin(); it != v.end(); it++) {
        std::cout << *it << std::endl;
    }

    /*std::vector<int> v3;
    v3.assign(5, 2);
    v3.assign({ 0, 2, 32, -4, 3 });
    v3.clear();*/

    return 0;
}