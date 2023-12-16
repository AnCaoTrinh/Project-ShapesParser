#pragma once 
#include "main.h"
#include "IShapes.h"
using std::string, std::shared_ptr;
class IParsable{
public :
    virtual shared_ptr<IShapes> parse(string) = 0;
    virtual string parsedObjectName() = 0;
};