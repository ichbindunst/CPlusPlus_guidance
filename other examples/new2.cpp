#include <iostream>
#include <string.h>

class Entity{
private:
    std::string m_Name;
public:
    Entity() : m_Name("Unknown") {}
    Entity(const std::string& name) : m_Name(name) {}

    const std::string& GetName() const { return m_Name;}
};

int main(){
    int a = 2;
    // new, require the memory we need
    int* b = new int[50];

    
    // new is a operator, just like + - / 
    Entity* e = new Entity[50];

    delete[] e;
    delete[] b;

    return 0;
}