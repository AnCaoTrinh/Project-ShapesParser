#include "main.h"
#include "IShapes.h"
#include "Rectangle.h"
#include "Square.h"
#include "Circle.h"
#include "IParsable.h"
#include "RectangleParser.h"
#include "SquareParser.h"
#include "CircleParser.h"
#include "ParserFactory.h"
#include "Utils.h"
#include "ShapesTextProvider.h"
#include "IConverter.h"
#include "TextConverter.h"
#include "Table.h"
#include "IValueConverter.h"
#include "ShapeToRowConverter.h"
int main()
{
    auto[shapes, n] = ShapesTextProvider::next("Shapes.txt");
    shared_ptr<IConverter> converter = make_shared<TextConverter>();
    
    for (auto shape : shapes){
        cout << shape->converted(converter) << endl;
    }
    cout << endl;

    vector<int> widths = {3, 10, 16, 12};
    vector<int> widths2(widths.begin() + 1, widths.end());
    shared_ptr<IValueConverter> converter2 = make_shared<ShapeToRowConverter>(widths2);
    Table table(widths, shapes, converter2);
    table.display();
    return 0;
}