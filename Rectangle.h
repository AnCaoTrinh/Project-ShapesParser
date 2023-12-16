#pragma once 
#include "main.h"
#include "IShapes.h"
#include "IConverter.h"
using std::string, std::shared_ptr;
class Rectangle:public IShapes{
private:
    int _width;
    int _height;
public :
    Rectangle(int, int);
    int width();
    int height();
    double perimeter();
    double area();
    string name();
    string converted(shared_ptr<IConverter>);
};
