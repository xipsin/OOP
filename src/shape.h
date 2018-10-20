#ifndef __SHAPE_H__
#define __SHAPE_H__

#include <iosfwd>

#include "position.h"

class shape
{
    position _pos;

public:
    // Нужен конструктор, который принимает const position &

    virtual void draw() = 0;
    virtual ~shape();
    virtual void load(std::istream &) = 0;

    void set_position(const position &);
    const position & get_position() const;
    
    friend std::istream &operator>>(std::istream &, shape &);
};

#endif