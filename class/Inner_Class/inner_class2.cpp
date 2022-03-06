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

};


int main(){

    Person::Address innerClass;
    innerClass.country = "China";
    innerClass.city = "Yaan";
    std::cout << innerClass.country << std::endl;
    std::cout << innerClass.city << std::endl;    

}