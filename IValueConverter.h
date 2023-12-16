#pragma once
#include "main.h"
#include "IShapes.h"

class IValueConverter{
public:
    virtual string convert(shared_ptr<IShapes> shape) = 0;
};