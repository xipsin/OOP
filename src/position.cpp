#include "position.h"

void position::set_x(double x)
{
    _x = x;
}

void position::set_y(double y)
{
    _y = y;
}

void position::set(double x, double y)
{
    set_x(x);
    set_y(y);
}

double position::get_x() const
{
    return _x;
}

double position::get_y() const
{
    return _y;
}