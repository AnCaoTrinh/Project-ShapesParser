#include "main.h"

#include "IShapes.h"
#include "Rectangle.h"
#include "Square.h"
#include "Circle.h"
#include "Triangle.h"

#include "IParsable.h"
#include "RectangleParser.h"
#include "SquareParser.h"
#include "CircleParser.h"
#include "TriangleParser.h"

#include "ParserFactory.h"

#include "Utils.h"

#include "ShapesTextProvider.h"

#include "IConverter.h"
#include "TextConverter.h"

#include "Table.h"

#include "IValueConverter.h"
#include "ShapeToRowConverter.h"

#include <windows.h>
int main()
{
    const char dll_file_path[] = "ShapesTextProvider.dll";
    HINSTANCE hDll = LoadLibrary(dll_file_path);
    if (!hDll)
    {
        return 0;
    }
    const char function_name[] = "createTextProvier";
    CREATE create_shapesTextProvider = (CREATE)GetProcAddress(hDll, function_name);

    auto [shapes, n] = create_shapesTextProvider()->next("Shapes.txt");
    
    shared_ptr<IConverter> converter = make_shared<TextConverter>();
    cout << "Reading shapes.txt\n";
    cout << "Found " << shapes.size() << "/" << n << " shapes.\n";
    for (auto shape : shapes)
    {
        cout << shape->converted(converter) << endl;
    }
    cout << endl;

    vector<int> widths = {1, 13, 16, 12};
    vector<int> widths2(widths.begin() + 1, widths.end());

    shared_ptr<IValueConverter> converter2 = make_shared<ShapeToRowConverter>(widths2);
    Table table(widths[0], shapes, converter2);

    table.display();
    FreeLibrary(hDll);
    return 0;
}