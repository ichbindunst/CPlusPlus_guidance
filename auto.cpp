#include <iostream>
#include <string.h>

std::string GetName(){
    return "Li";
}

int main(){

    int a = 5;

    auto b = a;

    auto name = GetName();

    std::cout << b << std::endl;


    return 0;
}