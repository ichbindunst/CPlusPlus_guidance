#include <iostream>

int main(){

    int var = 8;
    int* ptr = &var;
    double* ptr1 = (double*)&var;

    // change value of var to 10 
    *ptr = 10;

    std::cout << var << std::endl;

    // ask for 8 bytes memory
    // return the pointer to the beginner of this memory
    // this buffer is a pointer
    char* buffer = new char[8];
    
    delete[] buffer;

    char* buffer2 = new char[8];
    // using a pointer to pointer the buffer pointer
    char** ptr2 = &buffer;
    



    return 0;

}