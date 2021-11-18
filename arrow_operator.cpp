#include <iostream>
#include <string.h>

class Entity{
public:
    int x;

public:
    void Print() const{
        std::cout << "Hello!" << std::endl;
    }
};

int main(){
    Entity e;
    e.Print();

    // 2 conditions
    // 1. this is a class type pointer
    // 2. using the member in this class, which this class type pointer pointed
    Entity* ptr = &e;
    ptr->Print();
    ptr->x;


    return 0;
}