#include <iostream>
#include <string>
#include <vector>

void display_result(int result) {
    using namespace std;
    cout << "Result is " << result << endl;
}

int add(const std::vector<int>& values) {
    int result = 0;
    for (auto value : values) {
        result += value;
    }
    return result;
}

int multiply(const std::vector<int>& values) {
    auto result = 1;
    for (auto value : values) {
        result *= value;
    }
    return result;
}

int sub(const std::vector<int>& values) {
    auto result = values[0];
    int  i      = 0;
    for (auto value : values) {
        if (i != 0) {
            result -= value;
        }
        i++;
    }
    return result;
}

int compute_result(char op, const std::vector<int> values) {
    switch (op) {
    case '+':
        return add(values);

    case '*':
        return multiply(values);

    case '-':
        return sub(values);

    default:
        return 0;
    }
}

bool parse_params(char& op, std::vector<int>& values, int argc, char** argv) {
    using namespace std;
    if (argc < 2) {
        cerr << "Expected operator as first argument." << endl;
        return false;
    }

    string op_str = argv[1];

    if (op_str != "+" && op_str != "*" && op_str != "-") {
        cerr << "Expected operator to be '+', '*' or '-'." << endl;
        return false;
    }
    op = op_str[0];

    for (auto arg_i = 2; arg_i < argc; ++arg_i) {
        auto value = stoi(argv[arg_i]);
        values.emplace_back(value);
    }

    if (op == '-' && values.empty()) {
        cerr << "Operator '-' expects at least one operand to substract from." << endl;
        return false;
    }
    return true;
}

int main(int argc, char** argv) {
    char             op = '?';
    std::vector<int> values;
    if (!parse_params(op, values, argc, argv)) {
        return -1;
    }
    auto result = compute_result(op, values);
    display_result(result);
    return 0;
}
