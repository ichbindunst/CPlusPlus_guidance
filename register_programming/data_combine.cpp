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

    int Number1 = 0b00000001;
    int Number2 = 0b00100001;
    
    int write = 0b00000010;
    int read = 0b11111100;

    // method to realize the data combine
    // 1. 'or with zeros'
    // 2. 'and with ones' 

    int writeNumber = (Number1 << 2) | write;
    binaryRecursion(writeNumber);
    std::cout << std::endl;

    int readNumber = (Number2 << 2) & read;
    binaryRecursion(readNumber);
    std::cout << std::endl;


    // in embedded programming or register programming or / microcontroller programming 
    // expecially in Data transmission, if you want to receive two bytes, and combine them as one data
    // it's quiet normally to do this: 

    int Number3 = 0b1000001;        
    int temp = Number3 << 8;    // shift 8 bits, it will automatically full with zeros, i.e. 0b1000 0001 0000 0000
    int twoBytesNumber = temp | read;
    binaryRecursion(twoBytesNumber);    // the result should be 0b1000 0001 1111 1100
     

}