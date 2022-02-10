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

int main(){
    
    int Number1 = 0b1111;

    // if you just need the first and second MSBs
    int testNumber1 = 0b1100;
    int first_second_MSBs = Number1 & testNumber1;
    binaryRecursion(first_second_MSBs);
    std::cout << std::endl;


    int Number2 = 0b1100;
    // if you want to change the LSBs
    int testNumber2 = 0b1111;
    int first_second_LSBs = Number2 | testNumber2;
    binaryRecursion(first_second_LSBs);
    std::cout << std::endl;
    

    return 0;
}