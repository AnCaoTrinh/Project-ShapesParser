#pragma once
#include "main.h"
#include "IParsable.h"
#include "RectangleParser.h"
#include "SquareParser.h"
#include "CircleParser.h"
using std::string, std::shared_ptr, std::make_shared;
class ParserFactory{
private:
    map<string, shared_ptr<IParsable>> _container;
    inline static shared_ptr<ParserFactory> _instance = nullptr;

    ParserFactory(){
        vector<shared_ptr<IParsable>> iteams = {make_shared<RectangleParser>()
        , make_shared<CircleParser>(), make_shared<SquareParser>()
        };

        for (int i = 0; i < iteams.size(); i++){
            _container.insert({iteams[i]->parsedObjectName(), iteams[i]});
        }
    }
public :
    static shared_ptr<ParserFactory> instance();
    shared_ptr<IParsable> create(string choice);
};