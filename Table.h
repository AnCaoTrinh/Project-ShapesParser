#pragma once
#include "main.h"
#include "IValueConverter.h"
class Table{
private:
    int _width;
    vector<shared_ptr<IShapes>> _data;
    shared_ptr<IValueConverter> _converter;

public:
    /// @brief constructor Table
    /// @param  width of table
    /// @param  data of table
    /// @param  converter of table
    Table(int, vector<shared_ptr<IShapes>>, shared_ptr<IValueConverter>);
    /// @brief print table
    void display();
};

