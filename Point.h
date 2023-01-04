// Class defenition
#ifndef POINT_H
#define POINT_H

class Point
{
private:
    int x, y;
public:
    int get_x(){return x;} // default inline function
    int get_y(){return y;}

    void set_x(int);
    void set_y(int);

    void print();
    void move(int delta_x, int delta_y);
};

#endif