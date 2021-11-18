// std::vector
// vector is actuelly dynamic array
// the difference between dynamic array and normal array is:
// the size of dynamic array can be changed or initialized
// but usually we dont initialize it, just use it, its size can change automatically

#include <iostream>
#include <string.h>
#include <vector>

struct Vertex
{
    float x, y, z;
};

// << overloading
std::ostream& operator<<(std::ostream& stream, const Vertex& vertex){
    stream << vertex.x << ", " << vertex.y << ", " << vertex.z;
}


int main(){

    std::vector<int> values = {1, 5, 2, 5, 6};

    std::vector<Vertex> vertices;
    vertices.push_back({1, 2, 3});
    vertices.push_back({4, 5, 6});

    for (int i = 0 ; i < vertices.size(); i++){
        std::cout << vertices[i] << std::endl;
    }

    // erase the second element
    //vertices.erase(vertices.begin() + 1);

    /*
    for (const Vertex& v: vertices){
        std::cout << v << std::endl;
    }
    */



    return 0;
}