#include "TextConverter.h"
using namespace std;
string TextConverter::convertRectangle(shared_ptr<IShapes> shape)
{
    stringstream result;
    auto cur = dynamic_pointer_cast<Rectangle>(shape);
    result << cur->name() << ": "
           << "Width=" << cur->width() << ", "
           << "Height =" << cur->height();
    return result.str();
}

string TextConverter::convertSquare(shared_ptr<IShapes> shape)
{
    stringstream result;
    auto cur = dynamic_pointer_cast<Square>(shape);
    result << cur->name() << ": "
           << "Side =" << cur->side();
    return result.str();
}

string TextConverter::convertCircle(shared_ptr<IShapes> shape)
{
    stringstream result;
    auto cur = dynamic_pointer_cast<Circle>(shape);
    result << cur->name() << ": "
           << "Radius =" << cur->radius();
    return result.str();
}

TextConverter::TextConverter()
{
    // do nothing
}

TextConverter::~TextConverter()
{
    // do nothing
}