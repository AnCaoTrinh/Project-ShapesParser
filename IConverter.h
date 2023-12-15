#pragma once
#include "main.h"
#include "IShapes.h"

class IConverter {
public:
	virtual string convertRectangle(shared_ptr<IShapes> shape) = 0;
	virtual string convertSquare(shared_ptr<IShapes> shape) = 0;
	virtual string convertCircle(shared_ptr<IShapes> shape) = 0;
	virtual ~IConverter();
};

// .cpp
IConverter::~IConverter()
{
	// do nshared_ptr<IShapes>
}