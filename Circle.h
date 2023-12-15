#pragma once
#include "main.h"
#include "IShapes.h"
#include "IConverter.h"
class Circle : public IShapes
{
private:
    int _radius;
public:
    inline static const float PI = 3.14f;
    Circle(int radius);
    int radius();
    double perimeter();
    double area();
    string name();
    string converted(shared_ptr<IConverter>);
};
// .cpp
Circle::Circle(int radius)
{
    _radius = radius;
}

double Circle::perimeter()
{
    return 2 * PI * _radius;
}

double Circle::area()
{
    return _radius * _radius * PI;
}

string Circle::name(){
    return "Circle";
}

int Circle::radius(){
    return _radius;
}

string Circle::converted(shared_ptr<IConverter> converter){
    auto cur = make_shared<Circle>(*this);
    return converter->convertCircle(cur);
}