#include <iostream>
#include <cmath>
#include "Point.h"

double distance(Point &a, Point &b)
{
    return sqrt(pow(static_cast<double>(a.get_x() - b.get_x()), 2) 
                + pow(static_cast<double>(a.get_y() - b.get_y()), 2));
}

int main()
{
    Point a, b;
    return 0;
}