#include <iostream>
#include <string>


class Person{

public:
    std::string name;

    typedef struct
    {
        std::string country;
        std::string city;
    } Information;

};


int main(){

    Person::Information innerClass;
    innerClass.country = "China";
    innerClass.city = "Yaan";
    std::cout << innerClass.country << std::endl;
    std::cout << innerClass.city << std::endl;    

}