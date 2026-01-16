#include <iostream>

namespace second{
    int a;
}
namespace first{
    int a;
}
int main(void){
    first::a = 5;
    second::a = 10;
    std::cout << first::a << " " << second::a << std::endl;

    return 0;
}