#include <iostream>

void Increment_Pointer(int* value){
    (*value)++;
}

void Increment_Reference(int& value){
    value++;
}


int main(){

    int a = 5;
    // reference to a
    int& ref = a;
    
    ref = 2;

    std::cout << "ref is now: " << ref << std::endl;

    int b = 6;
    Increment_Pointer(&b);
    std::cout << "b is now: " << b << std::endl;

    int c = 6;
    Increment_Reference(c);
    std::cout << "c is now : " << c << std::endl;

    return 0;
}