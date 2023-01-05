// Class defenition
#ifndef POINT_H
#define POINT_H

class Point
{
private:
    int x, y;
public:
    Point();
    int get_x()const{return x;} // default inline function
    int get_y()const{return y;}

    void set_x(int);
    void set_y(int);

    void print()const;
    void move(int delta_x, int delta_y);

    friend double distance(const Point &a, const Point &b);
};

#endif