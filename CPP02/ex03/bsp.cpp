#include "Point.hpp"

static Fixed abs(Fixed x) { return (x < 0) ? (x * -1) : x; }

static Fixed   area( Point const p1, Point const p2, Point const p3 ) {
    return ((
        ( p1.getX() * p2.getY() + p2.getX() * p3.getY() + p3.getX() * p1.getY() )
        - ( p2.getX() * p1.getY() + p3.getX() * p2.getY() + p1.getX() * p3.getY() )
    ) / 2);
}

bool bsp( Point const a, Point const b, Point const c, Point const point) {
    Fixed   abcArea = abs(area( a, b, c ));
    Fixed   pabArea = abs(area( point, a, b ));
    Fixed   pbcArea = abs(area( point, b, c ));
    Fixed   pcaArea = abs(area( point, c, a ));

    return  ( abcArea == pabArea + pbcArea + pcaArea );
}