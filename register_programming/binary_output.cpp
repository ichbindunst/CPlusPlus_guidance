/**
 * some method 
 * output as binary number
 * 
 */

#include <iostream>
#include <list>

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


// using list
void BinaryVector(int n){
    int temp;
    temp = n;
    std::list <int> myList;

    while(temp != 0){
        myList.push_front(temp % 2);
        temp = temp >> 1;        
    }

    for(auto i = myList.cbegin(); i != myList.cend(); i++){
        std::cout << *i;
    }
    std::cout << std::endl;
}



int main(){

    int Number1 = 5;
    int Number2 = 3;
    int Number3 = 0b100;

    // use recursion
    binaryRecursion(Number2);
    std::cout << std::endl;
    std::cout << std::endl;

    // use list
    BinaryVector(Number2);
    std::cout << std::endl;
    std::cout << std::endl;

    return 0;
}
