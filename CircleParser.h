#pragma once 
#include "main.h"
#include "IParsable.h"
#include "IShapes.h"
#include "Circle.h"
#include "Utils.h"
class CircleParser:public IParsable{
public :
    shared_ptr<IShapes> parse(string);
    string parsedObjectName();
};

// .cpp
shared_ptr<IShapes> CircleParser::parse(string info){
    int pos = info.find('=');
    regex matcher("\\d+");
    if (regex_match(info.substr(pos + 1), matcher)){
        shared_ptr<Circle> circle = make_shared<Circle>(stof(info.substr(pos + 1)));
        return circle;
    }
    return nullptr;
}

string CircleParser::parsedObjectName(){
    return "Circle";
}