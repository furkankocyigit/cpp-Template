#include <iostream>
#include <map>
#include "myLib.h"
#include "myLib.cpp"




int main(){

    std::cout<<"asignment work environment"<<std::endl;
    
    std::map<int,float> myMap;
    std::pair<int,float> pair;
    pair.first = 3;
    pair.second = 3.5;
    myMap.insert(pair);
    return 0;
}