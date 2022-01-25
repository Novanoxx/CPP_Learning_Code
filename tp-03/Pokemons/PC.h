#pragma once
#include "Pokeball.h"
#include "Pokemon.h"

#include <vector>

// A PC is the place where Pokemons get automagically sent when the trainer's pockets are full.
// When a Pokemon is transferred to the PC, this one takes ownership.
class PC {
public:
    const std::vector<std::unique_ptr<Pokemon>>& pokemons() { return _pkms; }
    void receive(std::unique_ptr<Pokemon> pkm) { _pkms.emplace_back(std::move(pkm)); }

private:
    std::vector<std::unique_ptr<Pokemon>> _pkms;
};
