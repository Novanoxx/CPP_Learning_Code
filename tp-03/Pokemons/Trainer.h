#pragma once

#include "PC.h"
#include "Pokeball.h"
#include "Pokemon.h"

#include <array>
#include <string>

// A person that capture Pokemons and make them fight.
class Trainer {
public:
    Trainer(std::string name, PC& pc)
        : _name { name }
        , _pc { pc } {}

    std::string              name() { return _name; }
    std::array<Pokeball, 6>& pokeballs() { return _balls; }
    void                     capture(std::unique_ptr<Pokemon> pkm) {
        int flag = 0;
        for (auto& ball : _balls) {
            if (ball.empty()) {
                ball.store(std::move(pkm));
                flag = 1;
                break;
            }
        }
        if (flag == 0) {
            _pc.receive(std::move(pkm));
        }
    }

private:
    std::string              _name;
    PC&                      _pc;
    std::array<Pokeball, 6u> _balls;
};
