#include <iostream>
#include <string> 

int main(void){
    // Create a string
    std::string str = "Hello";
    std::cout << str << " has size " << str.length() << std::endl;

    str += " World!";
    std::cout << str << " has size " << str.length() << std::endl;
    return 0;
}