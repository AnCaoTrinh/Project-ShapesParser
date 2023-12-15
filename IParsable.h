#pragma once 
#include "main.h"
#include "IShapes.h"
class IParsable{
public :
    virtual shared_ptr<IShapes> parse(string) = 0;
    virtual string parsedObjectName() = 0;
};