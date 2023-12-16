#pragma once 
#include "main.h"
#include "IParsable.h"
#include "IShapes.h"
#include "Square.h"
#include "Utils.h"
class SquareParser:public IParsable{
public :
    virtual shared_ptr<IShapes> parse(string);
    string parsedObjectName();
};

