#pragma once
#include "main.h"
#include "IShapes.h"
#include "IConverter.h"
class Triangle : public IShapes
{
private:
    int _a;
    int _b;
    int _c;

public:
    Triangle(int, int, int);
    /// @brief side a of triangle
    /// @return side a
    int a();
    /// @brief side b of triangle
    /// @return side b
    int b();
    /// @brief side c of triangle
    /// @return side c
    int c();
    
    double perimeter();
    double area();
    string name();
    string converted(shared_ptr<IConverter>);
};
