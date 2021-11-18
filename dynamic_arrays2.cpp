#include <iostream>
#include <string>
#include <vector>

struct Vertex
{
    float x, y, z;

    Vertex(float x, float y, float z) : x(x), y(y), z(z)
    {}

    Vertex(const Vertex& vertex) : x(vertex.x), y(vertex.y), z(vertex.z)
    {
        std::cout << "Copied!" << std::endl;
    }
};


int main(){

    std::vector<Vertex> vertices;
    vertices.push_back({1, 2, 3});
    vertices.push_back({4, 5, 6});
    vertices.push_back({7, 8, 9});


    return 0;
}