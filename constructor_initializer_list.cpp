#include <iostream>
#include <string.h>

class Entity{
private:
    std::string m_Name;
    int m_Score;

public:
    // default constructor
    /*
    Entity(){
        m_Name = "Unknown";
    }
    */
    // this default constructor is same as:
    //Entity()
        // the member you want to initialize
        // make sure you always initialize the members in same order 
        /*
        : m_Name("Unknown"), m_Score(0)
        {

        }
        */
    
    Entity(const std::string& name){
        m_Name = name;
    }
    

    // still, is the same as above
    /*
    Entity(const std::string& name)
        : m_Name(name)
    {
        
    }
    */
    

    const std::string& GetName() const {
        return m_Name;
    }
};

int main(int argc, char** argv){

    /*
    Entity e0;
    std::cout << e0.GetName() << std::endl;
    */

    Entity e1("li");
    std::cout << e1.GetName() << std::endl;

    return 0;
}

