#include "Table.h"
using namespace std;
Table::Table(int width, vector<shared_ptr<IShapes>> data, shared_ptr<IValueConverter> converter)
{
    _width = width;
    _data = data;
    _converter = converter;
}

void Table::display()
{

    for (int i = 0; i < _data.size(); i++)
    {
        int padding = (_width + to_string(i + 1).size()) / 2;
        cout << "|" << setw(padding + to_string(i + 1).size()) << right << i + 1
             << setw(padding) << right << ""
             << "|" << _converter->convert(_data[i]) << endl;
    }
}