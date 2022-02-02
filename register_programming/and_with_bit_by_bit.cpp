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
    int myNumber2 = 0b1011;
    int withNumber;
    int andNumber;

    // do 'with' bit by bit
    withNumber = myNumber1 | myNumber2;
    binaryRecursion(withNumber);
    std::cout << std::endl;
    std::cout << std::endl;


    // do 'and' bit by bit
    andNumber = myNumber1 & myNumber2;
    binaryRecursion(andNumber);
    std::cout << std::endl;
    std::cout << std::endl;
    
}