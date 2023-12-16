#pragma once
#include "main.h"
#include "IConverter.h"
#include "Rectangle.h"
#include "Square.h"
#include "Circle.h"
class TextConverter:public IConverter{
public :
    TextConverter();
    string convertRectangle(shared_ptr<IShapes> shape);
    string convertSquare(shared_ptr<IShapes> shape);
    string convertCircle(shared_ptr<IShapes> shape);
    ~TextConverter();
};


