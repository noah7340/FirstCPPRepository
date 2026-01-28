#include <iostream>

int main(void){
    // Initialize the string
    std::string str1("first string");

    // Initialize the string with another string
    std::string str2(str1);

    // Initialize the string with character and number of occurence
    std::string str3(100, '&');

    //Initialize the string by a part of another string
    std::string str4(str1, 6, 5);

    std::cout << str1 << "\n";
    std::cout << str2 << "\n";
    std::cout << str3 << "\n";
    std::cout << str4 << "\n";

    if (str1 == str2){
        std::cout << str4 + str1 << std::endl;
    }
    return 0;
}
