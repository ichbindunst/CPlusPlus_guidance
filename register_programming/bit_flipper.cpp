// this is a bit flipper algorithm
// but only with 8 bit

#include <iostream>


// using recursion to output binary number
void binaryRecursion(int n){
    int a;
    
    a = n % 2;
    // right shift one bit, equals to / 2
    n = n >> 1;
    
    if(n != 0){
        binaryRecursion(n);
    }
    
    std::cout << a;
}


int main(void){

    int myNumber = 0b10101010;
    int flipNumber;

    flipNumber = 255 - myNumber;
    binaryRecursion(flipNumber);
}

