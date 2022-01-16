#include <cctype>
#include <iostream>
#include <string>
#include <vector>

std::vector<unsigned int> count_lower(const std::string& word) {
    std::vector<unsigned int> result;
    result.resize(26);
    for (auto letter : word) {
        if (std::islower(letter)) {
            result[letter - 'a'] += 1;
        }
    }
    return result;
}

void display_lower_occ(const std::vector<unsigned int>& letters) {
    for (auto i = 0; i < 26; i++) {
        char val = i + 'a';
        std::cout << val << " : " << letters[i] << std::endl;
    }
}

int main() {
    using namespace std;
    string word;
    do {
        cin >> word;
        display_lower_occ(count_lower(word));
    }
    while (word != "QUIT");

    return 0;
}