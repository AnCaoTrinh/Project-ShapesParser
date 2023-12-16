#include "ParserFactory.h"
using namespace std;
shared_ptr<ParserFactory> ParserFactory::instance()
{
    if (nullptr == _instance)
    {
        ParserFactory *temp = new ParserFactory;
        _instance = shared_ptr<ParserFactory>(temp);
    }
    return _instance;
}

shared_ptr<IParsable> ParserFactory::create(string choice)
{
    shared_ptr<IParsable> f = nullptr;
    if (_container.count(choice))
    {
        f = _container[choice];
    }
    return f;
}