#ifndef __CIRCLE_H__
#define __CIRCLE_H__

#include "shape.h" 
#include "position.h" 

class circle : public shape
{
    double radius;
    

public:
    circle(const position &, double radius); // в реализации обязательно вызвать shape(pos) в списке инициализации
    /* Пример: 
        circle(const position &pos, double radius)
        : shape(pos), radius(radius)
        {}
    */
    virtual void draw() override;
    virtual void load(std::istream &) override;
}; 

#endif