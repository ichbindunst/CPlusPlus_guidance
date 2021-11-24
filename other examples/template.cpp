#include <iostream>
#include <string.h>

template<typename T>

void Print(T value){
    std::cout << value << std::endl;
}

/*
void Print(int value){
    std::cout << value << std::endl;
}


void Print(std::string value){
    std::cout << value << std::endl;
}


void Print(float value){
    std::cout << value << std::endl;
}
*/


int main(){

    Print(5);
    // just do the thing as 
    Print<int>(5);
    
    Print("Hello");
    Print(5.5f);

    return 0;
}