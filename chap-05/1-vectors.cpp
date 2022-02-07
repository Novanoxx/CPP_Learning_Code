#include <algorithm>
#include <iostream>
#include <utility>
#include <vector>

int main() {
    // std::vector<int> vector { 4, 0 }; // 4 0
    // std::vector<int> vector(4, 0);      // 0 0 0 0
    // for (auto i : vector) {
    //    std::cout << i << std::endl;
    //}

    int array[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

    // std::vector<int> part(&array[2], &array[5]);
    // for (const auto v : part) {
    //   std::cout << v << std::endl;
    //}

    std::vector<int> full(array, array + 11); // full.size() -> 10

    // for (size_t left = 0, right = full.size() - 1; left < right; left++, right--) {
    //  std::swap(full[left], full[right]);
    //}

    // for (auto it = full.begin(); it != full.end(); it += 2) {
    //    it = full.insert(it, *it);
    //}

    // while (!full.empty()) {
    //   full.pop_back();
    //}

    // full.erase(full.begin() + 2, full.begin() + 7);

    // const auto it = std::find(full.begin(), full.end(), 5);
    // if (it != full.end()) {
    //    full.erase(it);
    //}

    // for (const auto v : full) {
    //    std::cout << v << std::endl;
    //}

    std::vector<int> v;
    v.assign(5, 2);
    for (const auto value : v) {
        std::cout << value << std::endl;
    }
    v.assign({ 0, 2, 32, -4, 3 });
    for (const auto value : v) {
        std::cout << value << std::endl;
    }
    v.clear();

    return 0;
}