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
    /// @brief constructor Rectangle
    /// @param  width of rectangle
    /// @param  height of rectangle
    Rectangle(int, int);
    /// @brief get width
    /// @return width
    int width();
    /// @brief get height
    /// @return return height
    int height();
    double perimeter();
    double area();
    string name();
    string converted(shared_ptr<IConverter>);
};
