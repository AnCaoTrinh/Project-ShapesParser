#pragma once 
#include "main.h"
#include "IParsable.h"
#include "IShapes.h"
#include "Rectangle.h"
#include "Utils.h"
class RectangleParser:public IParsable{
    shared_ptr<IShapes> parse(string);
    string parsedObjectName();
};

// .cpp

shared_ptr<IShapes> RectangleParser::parse(string info){
    vector<string> token = Utils::String::split(info, ", ");
    string buffer;
    int pos1 = token[0].find('=');
    int pos2 = token[1].find('=');
    regex matcher("\\d+");
    if (regex_match(token[0].substr(pos1 + 1), matcher) && regex_match(token[1].substr(pos2 + 1), matcher)){
        shared_ptr<Rectangle> rectangle = make_shared<Rectangle>(stof(token[0].substr(pos1 + 1)), stof(token[1].substr(pos2 + 1)));
        return rectangle;
    }
    return nullptr;
}

string RectangleParser::parsedObjectName(){
    return "Rectangle";
}