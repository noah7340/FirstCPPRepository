#include <iostream>
#include <cmath>
void countdown (int n);



int main(){
    countdown(15);
    return(0);
}

void countdown(int n){
    std::cout << n << std::endl;
    n--;
    if (n <= 0) return;
    countdown(n);
}