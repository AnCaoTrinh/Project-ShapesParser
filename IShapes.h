#pragma once
#include "main.h"
#include "IConverter.h"
using std::string;
class IShapes{
public :
    /// @brief perimeter of shape
    /// @return value of perimeter
    virtual double perimeter() = 0;
    /// @brief area of shape
    /// @return value of area
    virtual double area() = 0;
    /// @brief name of shape
    /// @return name of shape
    virtual string name() = 0;
    /// @brief use design pattern visitor to convert shape
    /// @param converter
    /// @return information of shape
    virtual string converted(shared_ptr<IConverter>) = 0;
};