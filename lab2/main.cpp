#include <iostream>
#include <string>

class Money {
    std::string _digits;
    unsigned int _cents;
    public:
        Money(std::string digits) : _digits(digits), _cents(0) {
            if (_digits.length() > 9) {
                _cents = std::stoi(_digits.substr(9, _digits.length()));
                _digits = _digits.substr(0, 9);
            }
        }
}


