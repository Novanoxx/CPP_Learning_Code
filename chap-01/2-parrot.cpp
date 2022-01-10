#include <iostream>

int main() {
    using namespace std;

    // int number = 0;
    string word;
    /*
    while (true) {
        std::cin >> number;
        std::cout << "number : " << number << std::endl;
        if (number == -1) {
            break;
        }
    }

   do {
        std::cin >> number;
        std::cout << "number : " << number << std::endl;
   } while (number != -1);
   */
    for (int i = 0; i < 10; i++) {
        // std::cin >> number;
        cin >> word;
        cout << "Quack ! " << word << " ! Quack ! " << endl;
    }

    return 0;
}