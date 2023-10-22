#include "Point.hpp"

Point::Point(): x(0), y(0)  { 
    std::cout << "Default constructor called" << std::endl;
}

Point::Point(const float x, const float y): x(x) , y(y) {
    //std::cout << "Point created" << std::endl;
}

Point::Point(const Point &src):x(src.x), y(src.y) {}

Point::~Point(){
    //std::cout << "Destructor called" << std::endl;
}

Point& Point::operator=( const Point &other) {
    if(this != &other) {
        const_cast<Fixed&>(x) = other.x;
        const_cast<Fixed&>(y) = other.y;
    }
    return (*this);
}

Fixed Point::getX(void) const {
    return this->x;
}

Fixed Point::getY(void) const {
    return this->y;
}