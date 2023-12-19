#pragma once
#include "main.h"
#include "IShapes.h"

class IConverter {
public:
	/// @brief use design pattern visitor to convert shape
	/// @param shape 
	/// @return information of rectangle
	virtual std::string convertRectangle(shared_ptr<IShapes> shape) = 0;
	/// @brief use design pattern visitor to convert shape
	/// @param shape 
	/// @return information of square
	virtual std::string convertSquare(shared_ptr<IShapes> shape) = 0;
	/// @brief use design pattern visitor to convert shape
	/// @param shape 
	/// @return information of circle
	virtual std::string convertCircle(shared_ptr<IShapes> shape) = 0;
	/// @brief destructor IConverter
	virtual ~IConverter();
};

