#include <iostream>

class Food {
public:
    virtual void miam_miam() const = 0;
};

class Nutella : public Food {
public:
    void miam_miam() const override { std::cout << _name << std::endl; }

private:
    const std::string _name = "Nutella";
};

int main() {
    // The following shouldn't compile :
    // Food food;

    Nutella nutella;
    nutella.miam_miam(); // -> "Nutella"

    Food& nutella_as_food = nutella;
    nutella_as_food.miam_miam(); // -> "Nutella"

    const Food& nutella_as_cfood = nutella;
    nutella_as_cfood.miam_miam(); // -> "Nutella"

    std::cout << "fin" << std::endl;

    return 0;
}