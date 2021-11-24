#include <iostream>
#include <string.h>

int main(){
    std::string s = "some text";
    std::cout << s << std::endl;

    s.resize(4);
    std::cout << s << std::endl;
    
    s.resize(15, '!');
    std::cout << s << std::endl;

    return 0;
}