#include <iostream>
#include "GLFW/glfw3.h"
// or you can use this
// exter "c" int glfwInit();

int main()
{
    int a = glfwInit();
    std::cout << "value of a is: " << a << std::endl;

    std::cout << "Hello World!\n";
}

