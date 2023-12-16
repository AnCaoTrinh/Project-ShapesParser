#pragma once
#ifdef BUILD_TEXT_PROVIDER
#define TEXT_PROVIDER_API __declspec(dllexport)
#else
#define TEXT_PROVIDER_API __declspec(dllimport)
#endif
#include "main.h"
#include "IShapes.h"
#include "ParserFactory.h"
#include "Utils.h"
class ShapesTextProvider
{
public:
    virtual ~ShapesTextProvider() = default;
    virtual pair<vector<shared_ptr<IShapes>>, int> next(string filename) = 0;
};

extern "C" TEXT_PROVIDER_API shared_ptr<ShapesTextProvider> createTextProvier();
typedef shared_ptr<ShapesTextProvider> (*CREATE)();