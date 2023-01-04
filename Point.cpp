// Class implementation
#include "Point.h"

void Point::set_x(int _x)
{
    x = _x >= 0 ? _x : 0;
}

void Point::set_y(int _y)
{
    y = _y >= 0 ? _y : 0;
}
