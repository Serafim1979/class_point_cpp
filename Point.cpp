// Class implementation
#include <iostream>
#include <cmath>
#include "Point.h"


Point::Point()
    : x(0)
    , y(0)
{
    std::cout << "Default constructor" << std::endl;
}

Point::Point(const Point &other)
    : x(other.x)
    , y(y = other.y)
{
    std::cout << "Copy Constructor" << std::endl;
}

Point::Point(int _x)
{
    x = _x >= 0 ? _x : 0;
    y = 0;
}

Point::Point(int _x, int _y)
{
    x = _x >= 0 ? _x : 0;
    y = _y >= 0 ? _y : 0;
}

Point::~Point()
{
    std::cout << "Calling the Destructor" << std::endl;
}

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
