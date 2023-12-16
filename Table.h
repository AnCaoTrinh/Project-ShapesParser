#pragma once
#include "main.h"
#include "IValueConverter.h"
class Table{
private:
    int _width;
    vector<shared_ptr<IShapes>> _data;
    shared_ptr<IValueConverter> _converter;

public:
    Table(int, vector<shared_ptr<IShapes>>, shared_ptr<IValueConverter>);
    void display();
};

