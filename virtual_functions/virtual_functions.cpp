#include <iostream>
#include <string.h>

class Entity{
public:
    
    virtual std::string GetName(){
        // return the string Entity 
        return "noName";
    }
};

// Player take the inheritance of Entitiy
// Player is the sub class of Entity
class Player : public Entity
{
private:
    std::string m_Name;
public:
    // using a constructor to specify the m_Name of the class Player
    // using referene to specify the data
    // specify the m_name as the value of name, just like using "this", this->m_name = name;
    Player(const std::string& name)
        : m_Name(name)
    {

    }

    std::string GetName() override 
    {
        return m_Name; 
    }
};

// here using arrow "->", because it's a class type pointer pointed
void PrintName(Entity* entity){
    std::cout << entity->GetName() << std::endl;
}


int main(){
    Entity* e = new Entity();
    
    // we want using PrintName function to print the m_name
    // because the Player is a subclass of Entity
    // if we dont use virtual function
    // when we call PrintName, it cant tell which class we really calling
    // it's gonna default show the upper class, Entity
    // so we have to use virtual function, and the function should also with the mark "override" to distinguish

    std::cout << e->GetName() << std::endl;
    PrintName(e);

    Player* p = new Player("Li");
    PrintName(p);

    return 0;

}