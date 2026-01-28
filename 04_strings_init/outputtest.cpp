#include <iostream>

int main(void){
    std::string s0("R");
    std::string s1 = "G";
    std::string s2 = s0 + s1;
    s2 += 'R';
    s2 += (s1 < s2)? "Y" : s1;
    std::cout << s2 << "M" << std::endl;
    return 0;
} 