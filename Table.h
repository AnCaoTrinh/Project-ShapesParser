#pragma once
#include "main.h"
#include "IValueConverter.h"
class Table{
private:
    vector<int> _widths;
    vector<shared_ptr<IShapes>> _data;
    shared_ptr<IValueConverter> _converter;

public:
    Table(vector<int>, vector<shared_ptr<IShapes>>, shared_ptr<IValueConverter>);
    void display();
};

Table::Table(vector<int> widths, vector<shared_ptr<IShapes>> data, shared_ptr<IValueConverter> converter)
{
    _widths = widths;
    _data = data;
    _converter = converter;
}

void Table::display(){

    for (int i = 0; i < _data.size(); i++){
        cout << "|" << setw(_widths[0]) << left << i + 1 << "|" << _converter->convert(_data[i]) << endl;
    }

}