// #include <cstdlib>
#include <iostream>
#include <string>
#include <vector>

int main(int argc, char** argv) {
    using namespace std;

    // int array[] = { 0, 1, 2, 3 };
    if (argc < 2) {
        cerr << "Expected argument for array size" << endl;
        return -1;
    }
    int size = stoi(argv[2]);
    // int size = atoi(argv[2])
    if (size <= 0) {
        cerr << "Expected strictly positive value for array size" << endl;
    }
    vector<int> array;
    // cout << size << endl;
    /*
    int array[50] = {};

    for (int i = 0; i < 50; i++) {
        array[i] = i+1;
    }

    */
    for (int i = 0; i < size; ++i) {
        array.emplace_back(i + 1);
    }
    for (int value : array) {
        cout << value << endl;
    }

    return 0;
}
