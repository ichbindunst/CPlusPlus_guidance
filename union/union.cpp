// union will often used for reason 
// that the same data should have 2 names 

// every data in union have to be unique

#include <iostream>

struct Vector2{
    float x, y;
};

struct Vector4
{
    union // you can also give a name to union here
    {   
        // attention, in union you have to specifie the length of array
        // which means you can't use something like this
        // char charbuf[]
        // you have to 
        // char charbuf[32]
        
        struct 
        {
            float x, y, z, w;
        };

        struct 
        {
            // define two Vector2 type data
            // becaus the data in the union should be the same
            // which means that Vector a should represent float x, y in the first struct
            // Vector2 b shoud represet float z, w in the first struc
            // which means every data should have 2 float numbers corresponding to the type Vector2
            Vector2 a, b;
        };
        
    };
    
};

void PrintVector2(const Vector2& vector){
    std::cout << vector.x << ", " << vector.y << std::endl;
}


int main(){

    Vector4 vector = {1.0f, 2.0f, 3.0f, 4.0f};
    PrintVector2(vector.a);
    PrintVector2(vector.b);
    vector.z = 500.0f;
    std::cout << "-------------------------" << std::endl;
    PrintVector2(vector.a);
    PrintVector2(vector.b);

    return 0;
}