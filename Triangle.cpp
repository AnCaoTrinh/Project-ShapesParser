#include "Triangle.h"

// .cpp
Triangle::Triangle(int a, int b, int c)
{
    if (a + b <= c || a + c <= b || b + c <= a)
    {
        throw std::runtime_error("Invalid triangle");
    }
    _a = a;
    _b = b;
    _c = c;
}

int Triangle::a()
{
    return _a;
}

int Triangle::b()
{
    return _b;
}

int Triangle::c()
{
    return _c;
}

double Triangle::perimeter()
{
    return _a + _b + _c;
}

double Triangle::area()
{
    double p = 1.0 * (_a + _b + _c) / 2;
    return sqrt(p * (p - _a) * (p - _b) * (p - _c));
}

string Triangle::name()
{
    return "Triangle";
}

string Triangle::converted(shared_ptr<IConverter> converter)
{
    auto cur = make_shared<Triangle>(*this);
    return converter->convertTriangle(cur);
}
