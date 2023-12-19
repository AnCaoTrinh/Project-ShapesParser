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
    /// @brief constructor Circle
    /// @param radius 
    Circle(int radius);
    /// @brief get radius of circle
    /// @return radius of circle
    int radius();
    double perimeter();
    double area();
    std::string name();
    std::string converted(shared_ptr<IConverter>);
};
