#include <iostream>
#include <windows.h>

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


int main(){

    int myNumber = 0x00000001;
    int shiftNumber;

    // mathmatical calculation
    // circle left shift: shiftNumber = myNumber / 128 + myNumber * 2;
    // circle right shift: shiftNumber = myNumber * 128 + myNumber * 2;

    for(int i = 0; i < 8; i++){
        // using left shift as an example
        myNumber = myNumber / 128 + myNumber * 2;
        binaryRecursion(myNumber);
        std::cout << std::endl;
        Sleep(1000);
    }

    return 0;
}