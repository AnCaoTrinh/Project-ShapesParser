#pragma once
#include "main.h"
#include "IConverter.h"
using std::string;
class IShapes{
public :
    virtual double perimeter() = 0;
    virtual double area() = 0;
    virtual string name() = 0;
    virtual string converted(shared_ptr<IConverter>) = 0;
};