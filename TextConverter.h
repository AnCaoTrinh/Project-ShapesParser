#pragma once
#include "main.h"
#include "IConverter.h"
#include "Rectangle.h"
#include "Square.h"
#include "Circle.h"
#include "Triangle.h"
class TextConverter:public IConverter{
public :
    /// @brief constructor TextConverter
    TextConverter();
    /// @brief design pattern visitor
    /// @param shape 
    /// @return information of Rectangle
    string convertRectangle(shared_ptr<IShapes> shape);
    /// @brief design pattern visitor
    /// @param shape 
    /// @return information of Square
    string convertSquare(shared_ptr<IShapes> shape);
    /// @brief design pattern visitor
    /// @param shape 
    /// @return information of Circle
    string convertCircle(shared_ptr<IShapes> shape);
    /// @brief design pattern visitor
    /// @param shape 
    /// @return information of Triangle
    string convertTriangle(shared_ptr<IShapes> shape);
    /// @brief destructor TextConverter
    ~TextConverter();
};


