#pragma once
#include "main.h"
#include "IValueConverter.h"
#include "IShapes.h"
class ShapeToRowConverter:public IValueConverter{
private:
    vector<int> _widths;
public :
    ShapeToRowConverter(vector<int>);
    string convert(shared_ptr<IShapes>);
};

