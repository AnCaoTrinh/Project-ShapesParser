#include "SquareParser.h"
using namespace std;
//.cpp
shared_ptr<IShapes> SquareParser::parse(string info)
{
    int pos = info.find('=');
    regex matcher("\\d+");
    if (regex_match(info.substr(pos + 1), matcher))
    {

        shared_ptr<Square> square = make_shared<Square>(stof(info.substr(pos + 1)));
        return square;
    }
    return nullptr;
}

string SquareParser::parsedObjectName()
{
    return "Square";
}