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

    Information information;
};


int main(){

    Person person;
    person.information.country = "China";
    person.information.city = "Yaan";
    std::cout << person.information.country << std::endl;
    std::cout << person.information.city << std::endl;    

}