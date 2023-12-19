#pragma once
#include "main.h"
#include "IShapes.h"
#include "IConverter.h"
class Square : public IShapes{
private:
    int _side;
public :
    /// @brief get side of square
    /// @return side of square
    int side();
    /// @brief constructor Square
    /// @param  side of square
    Square(int);
    double perimeter();
    double area();
    string name();
    string converted(shared_ptr<IConverter>);
};


