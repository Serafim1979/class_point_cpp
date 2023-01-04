// Class implementation
#include <iostream>
#include <cmath>
#include "Point.h"

void Point::set_x(int _x)
{
    x = _x >= 0 ? _x : 0;
}

void Point::set_y(int _y)
{
    y = _y >= 0 ? _y : 0;
}

void Point::print()const
{
    std::cout << '(' << x << ', ' << y << ')';
}

void Point::move(int dx, int dy)
{
    set_x(x + dx);
    set_y(y + dy);
}

double distance(const Point &a, const Point &b)
{
    return sqrt(pow(static_cast<double>(a.x - b.x), 2) 
                + pow(static_cast<double>(a.y - b.y), 2));
}
