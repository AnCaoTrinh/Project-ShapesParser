#pragma once
#include "main.h"
#include "IShapes.h"

class IConverter {
public:
	virtual std::string convertRectangle(shared_ptr<IShapes> shape) = 0;
	virtual std::string convertSquare(shared_ptr<IShapes> shape) = 0;
	virtual std::string convertCircle(shared_ptr<IShapes> shape) = 0;
	virtual ~IConverter();
};

