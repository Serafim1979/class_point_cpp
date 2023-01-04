// Class implementation
#include <iostream>
#include "Point.h"

void Point::set_x(int _x)
{
    x = _x >= 0 ? _x : 0;
}

void Point::set_y(int _y)
{
    y = _y >= 0 ? _y : 0;
}

void Point::print()
{
    std::cout << '(' << x << ', ' << y << ')';
}

void Point::move(int dx, int dy)
{
    set_x(x + dx);
    set_y(y + dy);
}
