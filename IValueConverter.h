#pragma once
#include "main.h"
#include "IShapes.h"

class IValueConverter{
public:
    /// @brief use design pattern visitor to convert shape
    /// @param shape 
    /// @return information of shape
    virtual string convert(shared_ptr<IShapes> shape) = 0;
};