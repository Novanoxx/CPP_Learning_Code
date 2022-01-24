#include <iostream>
#include <memory>
#include <utility>
#include <vector>

int main() {
    //    std::vector<std::unique_ptr<int>> many_ints;

    //    auto value = std::make_unique<int>(3);

    //    if (value != nullptr) {
    //        std::cout << "value is " << *value << std::endl;
    //   }
    //    else {
    //        std::cout << "value is empty" << std::endl;
    //    }

    //    many_ints.emplace_back(std::move(value));

    //    if (value != nullptr) {
    //        std::cout << "value is " << *value << std::endl;
    //    }
    //    else {
    //        std::cout << "value is empty" << std::endl;
    //    }

    //   if (many_ints[0] != nullptr) {
    //        std::cout << "many_ints[0] is " << *many_ints[0] << std::endl;
    //    }
    //    else {
    //        std::cout << "many_ints[0] is empty" << std::endl;
    //}

    std::vector<std::string> many_strings;

    std::string value = "will I move?";

    std::cout << "value is '" << value << "'" << std::endl;

    many_strings.emplace_back(std::move(value));

    std::cout << "value is '" << value << "'" << std::endl;
    std::cout << "many_strings[0] is '" << many_strings[0] << "'" << std::endl;

    return 0;
}
