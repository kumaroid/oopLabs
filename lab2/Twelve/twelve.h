#pragma once

#include <cstring>
#include <initializer_list>
#include <string>
#include <iostream>

namespace pepe {

class twelve {
public:
    using uchar = unsigned char;
private:
    static const int BASE = 12;

    uchar * _data = nullptr;
    size_t _size = 0, _capacity = 0;

    static char toChar(uchar x);
    static uchar toValue(char c);

    uchar& operator[] (const int index);
    uchar operator[] (const int index) const;
public:
    twelve();
    twelve(const unsigned int x);
    twelve(const size_t & n, uchar t);
    twelve(const std::initializer_list<uchar> & t);
    twelve(const std::string &t);
    twelve(const char* cStr);

    twelve(const twelve& other);
    twelve(twelve&& other) noexcept;
    virtual ~twelve() noexcept;
    twelve& operator=(const twelve& other);

    std::string toString() const;
    size_t size() const;
    void resize(const size_t newSize);
    void pushBack(const uchar x);

    // Boolean
    bool operator== (const twelve& other) const;
    bool operator!= (const twelve& other) const;
    bool operator< (const twelve& other) const;
    bool operator<= (const twelve& other) const;
    bool operator> (const twelve& other) const;
    bool operator>= (const twelve& other) const;

    // Arithmetic
    twelve operator+ (const twelve& other) const;
    twelve& operator+= (const twelve& other);
    twelve operator- (const twelve& other) const;
    twelve& operator-= (const twelve& other);

    // Streams
    friend std::ostream& operator<< (std::ostream& stream, const twelve& twelve);
    friend std::istream& operator>> (std::istream& stream, twelve& twelve);
};

}