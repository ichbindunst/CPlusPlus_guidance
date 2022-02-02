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

    int myNumber1 = 0b1101;
    std::cout << "Decimal of 0b1101 is: " << myNumber1 << std::endl;
    std::cout << std::endl;

    int myNumber2;

    // essence of right shift is divide 2
    myNumber2 = myNumber1 >> 1;
    binaryRecursion(myNumber2);
    std::cout << std::endl;
    std::cout << std::endl;


    // essence of left shift is multiply 2
    myNumber2 = myNumber1 << 1;
    binaryRecursion(myNumber2);
    std::cout << std::endl;
    std::cout << std::endl;

    return 0;
}