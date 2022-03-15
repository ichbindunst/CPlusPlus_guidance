#include <iostream>
#include <vector>
#include <cstring>
#include <stdint.h>

void BinaryRecursion(unsigned long Number){
    unsigned long BinaryNumber;
    std::vector<unsigned long> OutputNumber;
    
    BinaryNumber = Number % 2;
    OutputNumber.push_back(BinaryNumber);
    Number = Number >> 1;
    
    if(0 != Number){
        BinaryRecursion(Number);
    }

    for(int i = 0; i < OutputNumber.size(); i++){
        std::cout << OutputNumber[i];
    }
}


int main(){

    int testNumber = 0b11110000;
    std::cout << "the original number is: ";
    BinaryRecursion(testNumber);
    std::cout << std::endl;

    // ~ means: go reverse bit by bit
    uint8_t reverseNumber = ~(testNumber);
    std::cout << "after reverse is: ";
    BinaryRecursion(reverseNumber);
    std::cout << std::endl;

}
