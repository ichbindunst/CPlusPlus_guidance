#include <iostream>

int a = 5;
int b = 3;

class GlobalVariable {
    public:
        
        int changeA(){
            a = a - 1;
            return a;
        }

        int addResult(int a, int b){
            return a + b;   
        }

        int changeAagain(){
            changeA();
            std::cout << a << std::endl;    
        }

        
};


int main(int argc, char** argv){

    int sum; 

    GlobalVariable globalvariable;
    globalvariable.changeAagain();
    
    return 0;
}