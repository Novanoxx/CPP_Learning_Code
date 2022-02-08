#pragma once
#include "Pokemon.h"

#include <memory>

// A ball where Pokemon sleep.
class Pokeball {
public:
    bool     empty() const { return _pkm == nullptr; }
    void     store(std::unique_ptr<Pokemon> pkm) { _pkm = std::move(pkm); }
    Pokemon& pokemon() const { return *_pkm; }

private:
    std::unique_ptr<Pokemon> _pkm;
};