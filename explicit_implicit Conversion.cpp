#include <iostream>
#include <string.h>

class Entity
{
private:
    std::string m_Name;
    int m_Age;
public:
    Entity(const std::string& name)
        : m_Name(name), m_Age(-1) {}
    
    explicit Entity(int age)
        : m_Name("Unknown"), m_Age(age);
};

int main(){

    
    // we usually do this to initialize
    // Entity b(22);
    // but we can still do this, this is implicit conversion 
    Entity a = 22;

    // but with the explicit keyword we can't anymore
    // and this is the only possible way
    Entity b(22);

    

    return 0;
}