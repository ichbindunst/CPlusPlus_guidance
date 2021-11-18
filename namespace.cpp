// primary facts why namespace exists
// is to avoid naming conflicts
#include <iostream>

namespace apple { namespace function {
    
    void print(const std::string& text){
        std::cout << text << std::endl;
    }

    class Test
    {
    private:
        /* data */
    public:

        void class_print(){
            std::cout << "hallo" << std::endl;
        }

    };

}}

namespace orange {
    void print(const char* text){
        std::cout << text << std::endl;
    }
}



int main(){
    
    apple::function::print("hello");
    apple::function::Test test;
    test.class_print(); 
    return 0;
}