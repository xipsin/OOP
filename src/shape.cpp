#include "shape.h"
#include "position.h"

shape::~shape()
{

}
    
void shape::set_position(const position & pos)
{
    _pos = pos;
}

const position & shape::get_position() const
{
    return _pos;
}


std::istream &operator>>(std::istream & stream, shape & shape_obj)
{
    shape_obj.load(stream);
    return stream;
}