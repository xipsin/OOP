#ifndef __POSITION_H__
#define __POSITION_H__

class position
{
    double _x,_y;

public:
    position();
    position(double x, double y);
    void set(double x, double y);
    void set_x(double x);
    void set_y(double y);

    double get_x() const;
    double get_y() const;
};

#endif