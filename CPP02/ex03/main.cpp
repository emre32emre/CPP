#include "Point.hpp"

int main()
{
    Point p1(0,0);
    Point p2(0,3);
    Point p3(4,0);

    Point p6(10,0);

    if ( bsp( p1,p2,p3,p6 ) == true ) {
        std::cout << "Point is in the triangle" << std::endl;
    } else {
        std::cout << "Point is not in the triangle" << std::endl;
    }
}

