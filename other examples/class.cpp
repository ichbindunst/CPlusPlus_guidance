// es ist zu prüfung, ob es erlaubt is 
// die gleich Variablen-Name in unterschiedlichen Funktionen
// die in einem Klass ist

#include <iostream>


class Test {
    public:

    int a;
    
    Test(){
        a = 5;
    }

    int changeA(){
        a = 6;
        return a;
    }

    int addResult(int b){
        changeA();            
        return a + b;
    }

        
};


int main(int argc, char** argv){

    int result;
    Test test;
    
    std::cout << test.a << std::endl;

    result = test.changeA();
    
    std::cout << "the result1 is: " << result << std::endl;
    std::cout << test.a << std::endl;
    return 0;
}