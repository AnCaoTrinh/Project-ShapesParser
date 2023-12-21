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

string TextConverter::convertTriangle(shared_ptr<IShapes> shape)
{
    stringstream result;
    auto cur = dynamic_pointer_cast<Triangle>(shape);
    result << cur->name() << ": "
           << "Side1 =" << cur->a() << ", "
           << "Side2 =" << cur->b() << ", "
           << "Side3 =" << cur->c();
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