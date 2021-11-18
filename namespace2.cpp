// why do I dont 'using namespace std:: ???'
// one basic exmaple

#include <iostream>

namespace apple {
    void print(const std::string& text){
        std::cout << text << std::endl;
    }
}

namespace orange {
    void print(const char* text){
        std::cout << text << std::endl;
    }
}



int main(){


    // if now you want to call print 
    // you can not sure this print function is from which namespace

    return 0;
}