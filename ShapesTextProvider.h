#pragma once
#include "main.h"
#include "IShapes.h"
#include "ParserFactory.h"
#include "Utils.h"
class ShapesTextProvider{
public:
    static pair<vector<shared_ptr<IShapes>>, int> next(string filename);
};

pair<vector<shared_ptr<IShapes>>, int> ShapesTextProvider::next(string filename){
    ifstream input(filename);
    vector<shared_ptr<IShapes>> shapes;
    string size;
    int n;
    getline(input, size); // read n
    n = stoi(size);
    string line;
    while(getline(input, line)){
        vector<string> tokens = Utils::String::split(line, ": ");
        auto parser = ParserFactory::instance()->create(tokens[0]); 
        auto shape = parser->parse(tokens[1]);
        if(shape){
            shapes.push_back(shape);
        }
    }
    input.close();
    return {shapes, n};
}