#include <iostream>
#include <string.h>

class Entity{
public:
    int x, y;

    Entity(int x, int y)
        :x(x), y(y)
    {

    }

    // with keyword "this" is the same as above
    Entity(int x, int y)
    {
        // "this" refers to "this object/class Entity"
        this->x = x;
        this->y = y;
    }
};

int main(){

    
    return 0;
}