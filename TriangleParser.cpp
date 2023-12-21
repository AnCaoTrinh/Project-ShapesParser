#include "TriangleParser.h"

shared_ptr<IShapes> TriangleParser::parse(string info)
{
    vector<string> tokens = Utils::String::split(info, ", ");
    string buffer;
    int pos1 = tokens[0].find('=');
    int pos2 = tokens[1].find('=');
    int pos3 = tokens[2].find('=');
    regex matcher("\\d+");
    if (regex_match(tokens[0].substr(pos1 + 1), matcher) && regex_match(tokens[1].substr(pos2 + 1), matcher) && regex_match(tokens[2].substr(pos3 + 1), matcher))
    {
        try
        {
            // cout << tokens[0].substr(pos1 + 1) << ' ' << tokens[1].substr(pos2 + 1) << ' ' << tokens[2].substr(pos3 + 1) << endl;
            shared_ptr<Triangle> triangle = make_shared<Triangle>(stof(tokens[0].substr(pos1 + 1)), stof(tokens[1].substr(pos2 + 1)), stof(tokens[2].substr(pos3 + 1)));
            return triangle;
        }
        catch (const std::exception &e)
        {
            std::cout << e.what() << '\n';
        }
    }
    return nullptr;
}

string TriangleParser::parsedObjectName()
{
    return "Triangle";
}