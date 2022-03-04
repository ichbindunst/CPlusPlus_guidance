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

    std::cout << "test if you can do this: " << std::endl;

    // or you can do this
    Person::Address innerClass;
    innerClass.city = "Yaan";
    std::cout << innerClass.city << std::endl;    

}