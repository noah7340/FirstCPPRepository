#include <iostream>

void add_five(int& num){
    num += 5;
}

int main(void){
    int a = 10;
    // Create a reference
    int& a_ref = a;

    a += 10;

    add_five(a);
    std::cout << a << ' ' << a_ref << std::endl;

    return 0;
}