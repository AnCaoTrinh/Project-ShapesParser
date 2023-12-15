#pragma once
#include "main.h"
#include "IShapes.h"
#include "IConverter.h"
class Square : public IShapes{
private:
    int _side;
public :
    int side();
    Square(int);
    double perimeter();
    double area();
    string name();
    string converted(shared_ptr<IConverter>);
};


// .cpp
Square::Square(int side){
    _side = side;
}

double Square::perimeter(){
    return 4 * _side;
}

double Square::area(){
    return _side * _side;
}

string Square::name(){
    return "Square";
}

int Square::side(){
    return _side;
}

string Square::converted(shared_ptr<IConverter> converter)
{
    auto cur = make_shared<Square>(*this);
    return converter->convertSquare(cur);
}