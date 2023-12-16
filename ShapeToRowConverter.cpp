#include "ShapeToRowConverter.h"
using namespace std;
ShapeToRowConverter::ShapeToRowConverter(vector<int> widths)
{
    _widths = widths;
}

string ShapeToRowConverter::convert(shared_ptr<IShapes> shape)
{
    stringstream result;
    stringstream parse1;
    stringstream parse2;
    parse1 << "perimeter=" << fixed << setprecision(2) << shape->perimeter();
    parse2 << "area=" << fixed << setprecision(2) << shape->area();
    vector<string> temp = {shape->name(), parse1.str(), parse2.str()};
    for (int i = 0; i < _widths.size(); i++)
    {
        result << setw(_widths[i]) << left << temp[i] << "|";
    }
    return result.str();
}