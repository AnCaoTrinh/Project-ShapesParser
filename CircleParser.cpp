#include "CircleParser.h"
using namespace std;
// .cpp
shared_ptr<IShapes> CircleParser::parse(string info)
{
    int pos = info.find('=');
    regex matcher("\\d+");
    if (regex_match(info.substr(pos + 1), matcher))
    {
        shared_ptr<Circle> circle = make_shared<Circle>(stof(info.substr(pos + 1)));
        return circle;
    }
    return nullptr;
}

string CircleParser::parsedObjectName()
{
    return "Circle";
}