#include <iostream>
#include <stdio.h>
#include <string.h>

class Hund{
private:
    std::string name;
public:
    Hund(std::string newname) : name(newname){}

    std::string getName(){
        return this->name;
    }
    // mit friend can even change the private daten
    friend void adopt(Hund& h);
};

void adopt(Hund& h){
    h.name = "Goofy";
}

int main(){

    Hund ace("Ace");
    adopt(ace);
    std::cout << ace.getName();

    return 0;
}