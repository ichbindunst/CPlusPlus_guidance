#include <iostream>
#include <string>


class Person{

public:
    std::string name;

    class Address{
    public:
        std::string country;
        std::string city;
    };

    Address addr;

    void showAddress(){
        std::cout << name << std::endl;
        std::cout << addr.country << std::endl;
        std::cout << addr.city << std::endl;
    }

};


int main(){
    Person yao;
    yao.name = "Yao";
    yao.addr.country = "Germany";
    yao.addr.city = "Mainz";

    yao.showAddress();

    std::cout << "Hello World " << std::endl;
}