// this is the main cpp file
#include <iostream>
#include "header_file.h"

int main(){
    std::cout << "Hello World!" << std::endl;

    // the struct Player is not extern const struct 
    // when it be used in another CPP file, it has to be redefined
    Player player;
    player.age = 25;
    player.name = "mengyao";
    std::cout << player.name << std::endl;
    std::cout << player.age << std::endl;

    // because YAO is extern const struct
    // so it cannot be changed and it should be used directly
    std::cout << YAO.name << std::endl;
    std::cout << YAO.age << std::endl;

    return 0;
}