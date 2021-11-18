#include <iostream>
#include <stdlib.h>

double func(double x, double y){
    if(y == 0){
        throw y;
    }
    return x/y;
}

int main(int argc, char** argv){
    double res;

    try{
        res = func(2, 3);
        std::cout << "the result of x/y is: " << res << std::endl;
        res = func(4, 0);
    }
    catch(double){
        std::cerr << "error of dividing zero. \n";
        exit(1);
    }
    return 0;
}