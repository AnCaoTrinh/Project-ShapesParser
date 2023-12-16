#pragma once 
#include "main.h"
#include "IParsable.h"
#include "IShapes.h"
#include "Rectangle.h"
#include "Utils.h"
using std::string, std::shared_ptr;
class RectangleParser:public IParsable{
    shared_ptr<IShapes> parse(string);
    string parsedObjectName();
};

