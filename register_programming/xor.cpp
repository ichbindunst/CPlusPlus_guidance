#include <iostream>
#include <cstring>
#include <cstdint>
#include <vector>


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
    
    // same -> 0
    // different -> 1
    /*
        A   B   Y
        0   0   0
        0   1   1
        1   0   1
        1   1   0
    */

   uint8_t a1 = 0x01; //ob0000 0001
   uint8_t a2 = 0x00; //ob0000 0000
   uint8_t a3 = 0x03; //ob0000 0011
   uint8_t a4 = 0x02; //ob0000 0010

   uint8_t b1 = a1 ^ a2;
   std::cout << "0b00000001 ^ 0b00000000 = ";
   BinaryRecursion(b1);
   std::cout << std::endl; 

   uint8_t b2 = a1 ^ a3;
   std::cout << "0b00000001 ^ 0b00000011 = ";
   BinaryRecursion(b2);
   std::cout << std::endl;

   uint8_t b3 = a1 ^ a4;
   std::cout << "0b00000001 ^ 0b00000010 = ";
   BinaryRecursion(b3);
   std::cout << std::endl;

}