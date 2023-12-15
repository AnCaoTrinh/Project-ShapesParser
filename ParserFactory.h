#pragma once
#include "main.h"
#include "IParsable.h"
#include "RectangleParser.h"
#include "SquareParser.h"
#include "CircleParser.h"
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
    static shared_ptr<ParserFactory> instance(){
        if(nullptr == _instance){
            ParserFactory *temp = new ParserFactory;
            _instance = shared_ptr<ParserFactory>(temp);
        }
        return _instance;
    }

    shared_ptr<IParsable> create(string choice){
        shared_ptr<IParsable> f = nullptr;
        if(_container.count(choice)){
            f = _container[choice];
        }
        return f;
    }
};