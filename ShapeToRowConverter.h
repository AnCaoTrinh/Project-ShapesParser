#pragma once
#include "main.h"
#include "IValueConverter.h"
#include "IShapes.h"
class ShapeToRowConverter:public IValueConverter{
private:
    vector<int> _widths;
public :
    /// @brief constructor ShpaeToRowConverter
    /// @param widths of shape 
    ShapeToRowConverter(vector<int>);
    string convert(shared_ptr<IShapes>);
};

