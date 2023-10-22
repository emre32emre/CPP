#pragma once 
#include "Fixed.hpp"
#include "iostream"

class Point{
private:    
    const Fixed x;
    const Fixed y;
public:
    Point();
    Point(const float x, const float y);
    Point(const Point &original);
    ~Point();

    Point&  operator=( const Point &other );

    Fixed getX(void) const;
    Fixed getY(void) const;
    


};