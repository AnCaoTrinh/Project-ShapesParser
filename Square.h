#pragma once
#include "main.h"
#include "IShapes.h"
#include "IConverter.h"
class Square : public IShapes{
private:
    int _side;
public :
    int side();
    Square(int);
    double perimeter();
    double area();
    string name();
    string converted(shared_ptr<IConverter>);
};


