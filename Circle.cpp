#include "Circle.h"
using namespace std;
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

string Circle::name()
{
    return "Circle";
}

int Circle::radius()
{
    return _radius;
}

string Circle::converted(shared_ptr<IConverter> converter)
{
    auto cur = make_shared<Circle>(*this);
    return converter->convertCircle(cur);
}