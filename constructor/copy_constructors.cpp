#include <iostream>
#include <string.h>

class String
{
private: 
    char* m_Buffer;
    unsigned int m_Size;

public:
    String(const char* string)
    {
        // get the size of string
        m_Size = strlen(string);
        m_Buffer = new char[m_Size];
        // cope string into m_Buffer
        memcpy(m_Buffer, string, m_Size);
    }

    ~String(){
        delete[] m_Buffer;
    }


    friend std::ostream& operator<<(std::ostream& stream, const String& string);    

};

std::ostream& operator<<(std::ostream& stream, const String& string){
    stream << string.m_Buffer;
    return stream;
}


int main(){

    String string("li");

    std::cout << string << std::endl;


    return 0;
}