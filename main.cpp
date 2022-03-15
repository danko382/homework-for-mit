#include <iostream>

int fib(int value){
    if (0 == value || 1 == value) return value;     
    else return fib(value - 1) + fib(value - 2);		
}
int main(){

    std::cout<< "Hello World!" << std::endl;
    
    int n;
    std::cin >> n;
    std::cout << fib(n-1) << std::endl;

    return 0;
}