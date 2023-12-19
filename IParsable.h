#pragma once 
#include "main.h"
#include "IShapes.h"
using std::string, std::shared_ptr;
class IParsable{
public :
    /// @brief use method factory to create a parser
    /// @param  type shape
    /// @return shape
    virtual shared_ptr<IShapes> parse(string) = 0;
    /// @brief type of shape
    /// @return type 
    virtual string parsedObjectName() = 0;
};