#include <iostream>
#include <string>

class Student{
    public:
        std::string name;
        int age;
        char sex;

};

int main(){
    Student *p;
    p = new Student;

    p->name = "Mary";
    p->age = 123;
    p->sex = 'm';

    std::cout << p->name << " " << p->age << " " << p->sex << std::endl;
    
    delete p;

    return 0;
}