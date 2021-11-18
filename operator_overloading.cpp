// overload 的本质其实就是把operator在该程序中定义成自己想要的样子
// 比如这里重新定义了符号 + * << 
// 但是不要轻易用这个东西
#include <iostream>
#include <string.h>

struct Vector2
{
    float x, y;

    Vector2(float x, float y)
    : x(x), y(y) {}

    Vector2 Add(const Vector2& other) const{
        return Vector2(x + other.x, y + other.y);
    }

    Vector2 operator+(const Vector2& other) const{
        return Add(other);
    }

    Vector2 Multiply(const Vector2& other) const{
        return Vector2(x * other.x, y * other.y);
    }

    Vector2 operator*(const Vector2& other) const
    {
        return Multiply(other);
    }    
};

// ostream is the original << 
std::ostream& operator<<(std::ostream& stream, const Vector2& other){
    stream << other.x << ", " << other.y;
    return stream;
}

int main(){

    Vector2 position(4.0f, 4.0f);
    Vector2 speed(0.5f, 1.5f);
    Vector2 powerup(1.1f, 1.1f);

    // in a normal way
    Vector2 result1 = position.Add(speed);
    Vector2 result2 = position.Add(speed.Multiply(powerup));
    std::cout << result1.x <<" " << result1.y << std::endl;


    // after + and * overloading 
    Vector2 result3 = position + speed * powerup;
        
    // after << overloading
    std::cout << result3 << std::endl;


    return 0;
}