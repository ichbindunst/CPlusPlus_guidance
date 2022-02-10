#include <iostream>
#include <string.h>

class Entity{
private:
    int m_X, m_Y;

public:
    // what comes after const, is just "read only" and cannot be changed
    const int const GetX() const{
        return m_X;
    }

    // unlike const GetX(), this can certainly change
    void SetX(int x){
        m_X = x;
    }

};

// cannnot change content of Entity
void PrintEntity(const Entity& e){
    std::cout << e.GetX() << std::endl;
}

int main(){
    Entity e;

    return 0;
}