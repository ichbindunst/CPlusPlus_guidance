#include <iostream>

// this programm is used to clarify the difference between typedef and enum

enum example1{
    // if you don't give the umber, the default value of this number is 0, and the second is 2, third 3...
    // if you only give the value to the first umber, then the second + 1, third + 2 ...
    // like here, b = 6, c = 7
    // the parameters under enum don't have to give a type
    // because example1 is a type
    a = 5, b, c
};

typedef enum {
    e = 5, f, g
} example2;


// you can't write the code like follows, it's wrong
/*
enum{
    h = 5, i, j
} example3
*/


int main(){
    // example1 type testNumber1
    example1 testNumber1 = a;
    std::cout << "testNumber1 is: " << testNumber1 << std::endl;

    example2 testNumber2 = e;
    std::cout << "testNumber2 is: " << testNumber2 << std::endl;
}