// whatever comes after const is just "read only"
// can be changed actuelly, but no necessary
#include <iostream>
#include <string.h>

class Entity
{
private:
    int m_X, m_Y;
public:
    int GetX() const{

        return m_X;
    }

    void SetX(int x){
        m_X = x;
    }

};

// this reference means, right on this Entity above
void PrintEntity(const Entity& e){
    std::cout << e.GetX() << std::endl;
    // this e.SetX() cannot be called, because const can only call const
    // std::cout << e.SetX() << std::endl;
}

int main(){

    Entity e;


    return 0;
}