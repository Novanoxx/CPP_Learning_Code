#include <iostream>

class SharedStuff {
public:
    SharedStuff(const int i)
        : _value { i } {}

protected:
    const int _value;
};

class MoreStuff : public SharedStuff {
public:
    MoreStuff(const int i, const int j)
        : SharedStuff { i }
        , _value2 { j } {}

    void print() { std::cout << "value1: " << _value << " - value2: " << _value2 << std::endl; }

private:
    const int _value2;
};

int main() {
    SharedStuff stuff { 1 };

    // The following shouldn't compile :
    // std::cout << stuff._value << std::endl;

    MoreStuff stuffs { 3, 4 };
    stuffs.print(); // -> "value1: 3 - value2: 4"

    std::cout << "fin" << std::endl;

    return 0;
}