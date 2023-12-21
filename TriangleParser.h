#pragma once
#include "main.h"
#include "IParsable.h"
#include "IShapes.h"
#include "Triangle.h"
#include "Utils.h"

class TriangleParser :public IParsable {
public:
    shared_ptr<IShapes> parse(string);
    string parsedObjectName();
};

