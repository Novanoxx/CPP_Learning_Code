#pragma once
#include "Pokemon.h"

#include <memory>

// A ball where Pokemon sleep.
class Pokeball {
public:
    bool empty() const { return _empty; }
    void store(std::unique_ptr<Pokemon> pkm) {
        _pkm   = std::move(pkm);
        _empty = false;
    }
    Pokemon& pokemon() const { return *_pkm; }

private:
    bool                     _empty = true;
    std::unique_ptr<Pokemon> _pkm;
};