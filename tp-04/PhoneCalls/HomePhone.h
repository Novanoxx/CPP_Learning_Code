#pragma once

#include "Phone.h"

class HomePhone : public Phone {
public:
    HomePhone(const Person& owner, const int position)
        : Phone { owner }
        , _position { position } {}

    void ring() const override {
        if (_position != _owner.get_position()) {
            std::cout << "This is the voicemail of " << _owner.get_name() << ". Please leave a message."
                      << std::endl;
        }
        else {
            Phone::ring();
        }
    }

private:
    int _position;
};