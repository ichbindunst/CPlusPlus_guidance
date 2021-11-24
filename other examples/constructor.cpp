#include <iostream>
#include <string>

// constructor 

class Human{
    private:
        int age;
        std::string name;
    
    public:

        Human(){
            age = 0;
            std::cout << "Constructor is build " << std::endl;
        }

        Human(int Humanage, std::string humanName){
            this->age = Humanage;
            this->name = humanName;
            std::cout << "overload the constructor" << std::endl;
        }

        void IntroduceSelf(){
            std::cout << "His name is: " << name << ", and his age is " << age << std::endl;
        }

};



int main(){

    // contructor
    Human firstMan;
    Human firstWoman(28, "Emma");
    firstMan.IntroduceSelf();
    firstWoman.IntroduceSelf();

   

    return 0;
}