#pragma once 
#include <vector>
#include <sstream>
#include <algorithm>
#include <cmath>
#include <memory>
#include <regex>
#include <exception>
#include <stdexcept>
#include <string>
#include <map>
#include <iostream>
#include <iomanip>
#include <fstream>
#include <iomanip>
using std::dynamic_pointer_cast, std::cout, std::endl;
using std::ifstream, std::map, std::pair;
using std::regex, std::stringstream, std::regex_match;
using std::string, std::vector, std::shared_ptr, std::make_shared;
using std::to_string;
class ParserFactory;

class IShapes;
class Rectangle;
class Circle;
class Square;
class Triangle;

class IParsable;
class CircleParser;
class SquareParser;
class RectangleParser;
class TriangleParser;

class ShapesTextProvider;

class IConverter;
class TextConverter;

class Table;
class IValueConverter;
class ShapeToRowConverter;