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

//.cpp
shared_ptr<IShapes> SquareParser::parse(string info){
    int pos = info.find('=');
    regex matcher("\\d+");
    if (regex_match(info.substr(pos + 1), matcher)){

        shared_ptr<Square> square = make_shared<Square>(stof(info.substr(pos + 1)));
        return square;
    }
    return nullptr;
}

string SquareParser::parsedObjectName(){
    return "Square";
}