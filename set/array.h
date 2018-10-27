#ifndef __ARRAY_H__
#define __ARRAY_H__

#include "iterators.h"

template <typename T>
class Array
{
public:
    Iterator<T> & begin();
    Iterator<T> & end();
    void Add(T&);
    void Add(Array<T> &); //extern
    



private:
    std::unique_ptr<T> arr; //??? shared_ptr!!!!
    size_t size;
};

#endif