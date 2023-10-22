#include "Point.hpp"

int main()
{
    Point p1(3.5f ,5.5f);
    Point p2 = p1;
    std::cout<< "p2->" << p2.getX() << " , " << p2.getY() << std::endl;
}

