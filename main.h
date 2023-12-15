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
using namespace std;

class ParserFactory;

class IShapes;
class Rectangle;
class Circle;
class Square;

class IParsable;
class CircleParser;
class SquareParser;
class RectangleParser;


class ShapesTextProvider;

class IConverter;
class TextConverter;

class Table;
class IValueConverter;
class ShapeToRowConverter;