#pragma once 
#include "main.h"
#include "IShapes.h"
#include "IConverter.h"
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
// .cpp
Rectangle::Rectangle(int width, int height){
    _width = width;
    _height = height;
}

double Rectangle::perimeter(){
    return _width + _height;
}

double Rectangle::area(){
    return _width * _height;
}

string Rectangle::name(){
    return "Rectangle";
}

int Rectangle::width(){
    return _width;
}

int Rectangle::height(){
    return _height;
}

string Rectangle::converted(shared_ptr<IConverter> converter)
{
    auto cur = make_shared<Rectangle>(*this);
    return converter->convertRectangle(cur);
}