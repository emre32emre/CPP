#include "Fixed.hpp"
#include <cmath>

Fixed::Fixed() {
    this->number = 0;
}

Fixed::Fixed(const int num) {
    this->number = num * (1 << this->fractionalBits);
}

Fixed::Fixed(const float num) {
    this->number = roundf(num * (1 << this->fractionalBits));
}

Fixed::Fixed(const Fixed &original) {
    this->number = original.number;
}

Fixed::~Fixed() {
}
/* **********************  Overload Operators *****************/

Fixed &Fixed::operator=(const Fixed &other) {
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &other)
        this->number = other.getRawBits();
    return (*this);
}

std::ostream &operator<<(std::ostream &output, const Fixed &obj) {
    output << obj.toFloat();
    return (output);
}

bool Fixed::operator>(const Fixed &left) {
    return (this->getRawBits() > left.getRawBits());
}


bool Fixed::operator<(const Fixed &left) {
    return (this->getRawBits() < left.getRawBits());
}

bool Fixed::operator<=(const Fixed &left) {
    return (this->getRawBits() <= left.getRawBits());
}

bool Fixed::operator>=(const Fixed &left) {
    return (this->getRawBits() >= left.getRawBits());
}

bool Fixed::operator==(const Fixed &left) {
    return (this->getRawBits() == left.getRawBits());
}

bool Fixed::operator!=(const Fixed &left) {
    return (this->getRawBits() == left.getRawBits());
}

Fixed Fixed::operator+(const Fixed &left) {
    Fixed ret(this->toFloat() + left.toFloat());
    return (ret);
}

Fixed Fixed::operator-(const Fixed &left) {
    Fixed ret(this->toFloat() - left.toFloat());
    return (ret);
}

Fixed Fixed::operator*(const Fixed &left) {
    Fixed ret(this->toFloat() * left.toFloat());
    return (ret);
}

Fixed Fixed::operator/(const Fixed &left) {
    Fixed ret(this->toFloat() / left.toFloat());
    return (ret);
}

Fixed Fixed::operator++() {
    this->number++;
    return (*this);
}

Fixed Fixed::operator++(int) {
    Fixed temp;
    temp.setRawBits(this->number);

    this->number++;
    return (temp);
}

Fixed Fixed::operator--() {
    this->number--;
    return (*this);
}

Fixed Fixed::operator--(int) {
    Fixed temp;
    temp.setRawBits(this->number);

    this->number--;
    return (temp);
}


/*************************** MEMBER FUNCTIONS *******************************/

int Fixed::toInt(void)const {
    return (this->number / (1 << this->fractionalBits));
}

float Fixed::toFloat(void)const {
    return ((float)this->number / (float)(1 << this->fractionalBits));
}

int Fixed::getRawBits(void) const {
    return (number);
}

void Fixed::setRawBits(int const raw) {
    this->number = raw;
}

Fixed &Fixed::min(Fixed &a, Fixed &b) {
    if (a < b)
        return (a);
    return (b);
}

Fixed &Fixed::max(Fixed &a, Fixed &b) {
    if (a > b)
        return (a);
    return (b);
}

const Fixed &Fixed::min(const Fixed &a, const Fixed &b) {
    if (a.getRawBits() < b.getRawBits())
        return (a);
    return (b);
}

const Fixed &Fixed::max(const Fixed &a, const Fixed &b) {
    if (a.getRawBits() > b.getRawBits())
        return (a);
    return (b);
}

