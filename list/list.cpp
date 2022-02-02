#include <iostream>
#include <list>

int main(){
    
    std::list <int> myList;
    myList.assign(5, 27);
    myList.push_front(6);
    myList.push_back(10);

    for(auto i = myList.cbegin(); i != myList.cend(); i++){
        std::cout << *i << std::endl;
    }
    std::cout << std::endl;
    std::cout << std::endl;


    myList.unique();
    for(auto i = myList.cbegin(); i != myList.cend(); i++){
        std::cout << *i << std::endl;
    }
    std::cout << std::endl;
    std::cout << std::endl;


    myList.sort();
    for(auto i = myList.cbegin(); i != myList.cend(); i++){
        std::cout << *i << std::endl;
    }
    std::cout << std::endl;
    std::cout << std::endl;


    for(auto i = myList.cbegin(); i != myList.cend(); i++){
        if(*i == 27){
            myList.erase(i);
            break;
        }
        std::cout << *i << std::endl;
    }    
    std::cout << std::endl;
    std::cout << std::endl;


    myList.remove(10);
    for(auto i = myList.cbegin(); i != myList.cend(); i++){
        std::cout << *i << std::endl;
    }


    return 0;
}