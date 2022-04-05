#include "log.h"
#include <iostream>

void Log(const char* message){
    
    std::cout << message << std::endl;
}


void InitLog(){

    Log("Initializing Log");
}

struct Player
{
    std::string name = "yao";
    int age = 27;
};
