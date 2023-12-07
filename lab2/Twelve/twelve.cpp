#include "twelve.h"

#include <algorithm>
#include <iostream>

// Utils

namespace pepe {

// Privates:

twelve::uchar& twelve::operator[] (const int index) {
    if (index >= this->size()) {
        throw std::out_of_range("Index out of range. (twelve operator[])");
    }
    return _data[index];
}

twelve::uchar twelve::operator[] (const int index) const {
    if (index >= this->size()) {
        throw std::out_of_range("Index out of range. (twelve operator[])");
    }
    return _data[index];
}

//

char twelve::toChar(uchar x) {
    if (x < 0 || x > 11) {
        throw std::invalid_argument("toChar: invalid argument");
    }
    if (x < 10) {
        return '0' + x;
    }
    return 'a' + (x - 10);
}

twelve::uchar twelve::toValue(char c) {
    if (!(c >= 'a' && c <= 'b') && !(c >= '0' && c <= '9')) {
        throw std::invalid_argument("toValue: invalud argument");
    }
    if (c >= 'a' && c <= 'b') {
        return c - 'a' + 10;
    }
    return c - '0';
}

//

twelve::twelve() {
    _size = 0;
    _capacity = 1;
    _data = new uchar[_capacity];
}

twelve::twelve(const size_t & n, uchar t = 0) {
    _size = n;
    _capacity = n;
    _data = new uchar[_capacity];
    std::fill_n(_data, n, t);
}

twelve::twelve(const std::initializer_list<uchar> & t) {
    _size = t.size();
    _capacity = t.size();
    _data = new uchar[_capacity];
    int i = 0;
    for (const uchar & el : t) {
        _data[i] = el;
        i++;
    }
}

twelve::twelve(const std::string &t) {
    _size = t.size();
    _capacity = t.size();
    _data = new uchar[_capacity];
    try {
        for (int i = 0; i < _size; i++) {
            _data[i] = toValue(t[_size - i - 1]);
        }
    } catch (...) {
        throw std::invalid_argument("twelve constructor: can't interpret string as number.");
    }
}

twelve::twelve(const char* cStr) {
    _size = strlen(cStr);
    _capacity = _size;
    _data = new uchar[_capacity];
    try {
        for (int i = 0; i < _size; i++) {
            _data[i] = toValue(cStr[_size - i - 1]);
        }
    } catch (...) {
        throw std::invalid_argument("twelve constructor: can't interpret string as number.");
    }
}

twelve::twelve(const twelve& other) {
    _size = other.size();
    _capacity = _size;
    _data = new uchar[_capacity];
    std::memcpy(_data, other._data, _size * sizeof(uchar));
}

twelve::twelve(twelve&& other) noexcept {
    _size = other._size;
    _capacity = other._capacity;
    _data = other._data;
    other._data = nullptr;
    other._size = 0;
    other._capacity = 0;
}

twelve::~twelve() {
    delete [] this->_data;
}

twelve& twelve::operator=(const twelve& other) {
    _size = other._size;
    _capacity = other._capacity;
    _data = new uchar[_size];
    memcpy(_data, other._data, _size * sizeof(uchar));
    return *this;
}

std::string twelve::toString() const {
    if (this->size() == 0) {
        return "0";
    }
    std::string result;
    for (int i = 0; i < _size; i++) {
        result.push_back(toChar(_data[i]));
    }
    std::reverse(result.begin(), result.end());
    return result;
}

size_t twelve::size() const {
    return this->_size;
}

void twelve::resize(const size_t newSize) {
    if (newSize <= this->_capacity) {
        this->_size = newSize;
    } else {
        try {
            uchar * newData = new uchar[newSize];
            std::memcpy(newData, this->_data, this->size() * sizeof(uchar));
            delete [] this->_data;
            this->_data = newData;
            this->_size = newSize;
        } catch (...) {
            throw std::bad_array_new_length();
        }
    }
}

void twelve::pushBack(const uchar x) {
    if (x >= this->BASE) {
        throw std::invalid_argument("pushBack with x >= BASE.");
    }
    this->resize(this->size() + 1);
    (*this)[this->size() - 1] = x;
}

// Boolean

bool twelve::operator== (const twelve & other) const {
    if (other.size() == 0 && size() == 0) {
        return true;
    }
    if (size() != other.size()) {
        return false;
    }
    for (int i = 0; i < size(); i++) {
        if (_data[i] != other._data[i]) {
            return false;
        }
    }
    return true;
}

bool twelve::operator!= (const twelve & other) const {
    return !operator==(other);
}

bool twelve::operator< (const twelve & other) const {
    if (other.size() == 0 && size() == 0) {
        return false;
    }
    if (size() > other.size()) {
        return false;
    }
    if (size() < other.size()) {
        return true;
    }
    for (int i = size(); i >= 0; i--) {
        if (_data[i] < other._data[i]) {
            return true;
        }
        if (_data[i] > other._data[i]) {
            return false;
        }
    }
    return false;
}

bool twelve::operator<= (const twelve & other) const {
    if (other.size() == 0 && size() == 0) {
        return true;
    }
    if (size() > other.size()) {
        return false;
    }
    if (size() < other.size()) {
        return true;
    }
    for (int i = size(); i >= 0; i--) {
        if (_data[i] < other._data[i]) {
            return true;
        }
        if (_data[i] > other._data[i]) {
            return false;
        }
    }
    return true;
}

bool twelve::operator> (const twelve & other) const {
    return !operator<=(other);
}

bool twelve::operator>= (const twelve & other) const {
    return !operator<(other);
}

// Arithmetic

twelve twelve::operator+(const twelve & other) const {
    twelve result;
    int carry = 0;
    for (size_t i = 0; i < std::max(other.size(), this->size()) || carry; i++) {
        uchar cur = ((i < this->size() ? (*this)[i] : 0) +
                     (i < other.size() ? other[i] : 0) + carry);
        result.pushBack(cur % this->BASE);
        carry = cur / this->BASE;
    }
    return result;
}

twelve& twelve::operator+= (const twelve& other) {
    *this = std::move(*this + other);
    return *this;
}

twelve twelve::operator-(const twelve & other) const {
    if ((*this) < other) {
        return other.operator-(*this);
    }
    twelve result;
    int carry = 0;
    for (size_t i = 0; i < std::max(other.size(), this->size()) || carry; i++) {
        int cur = ((int)(i < this->size() ? (*this)[i] : 0) -
                   (int)(i < other.size() ? other[i] : 0) - carry);
        result.pushBack((cur + this->BASE) % this->BASE);
        carry = (cur < 0 ? 1 : 0);
    }
    int zeroCount = 0;
    while (zeroCount < result.size() && result[result.size() - zeroCount - 1] == 0) {
        zeroCount++;
    }
    result.resize(result.size() - zeroCount);
    return result;
}

twelve& twelve::operator-= (const twelve& other) {
    *this = std::move(*this - other);
    return *this;
}


// Streams
std::ostream& operator<< (std::ostream& stream, const twelve& twelve) {
    stream << twelve.toString();
    return stream;
}

std::istream& operator>> (std::istream& stream, twelve& tw) {
    std::string str;
    stream >> str;
    tw = twelve(str.c_str());
    return stream;
}

}