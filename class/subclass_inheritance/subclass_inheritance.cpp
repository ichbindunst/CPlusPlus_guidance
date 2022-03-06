#include <iostream>

class Entity{
public: 
    float X, Y;

    void Move(float xa, float ya){
        X += xa;
        Y += ya;
    }
};

// class Player is the subclass from class Entity
// it contains all the information from the public in class Entity
class Player : public Entity
{
public:
    const char* Name;

    void PrintName(){
        std::cout << Name << std::endl;
    }

};

int main(int argc, char** argv){

    Player player;
    player.X = 2;
    player.Y = 5;
    player.Move(3, 3);
    std::cout << "now the X in class Entity has change into : " << player.X << std::endl;


    return 0;
}