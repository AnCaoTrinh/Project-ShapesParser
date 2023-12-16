#pragma once 
#include "main.h"
#include "IParsable.h"
#include "IShapes.h"
#include "Circle.h"
#include "Utils.h"
class CircleParser:public IParsable{
public :
    std::shared_ptr<IShapes> parse(string);
    std::string parsedObjectName();
};

