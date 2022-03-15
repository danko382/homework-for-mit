#include <iostream>

void fib(int n){
    int temp = 0, temp1 = 1, temp2 = 0;
    for (int i = 0; i < n; ++i){
        std::cout << temp2 << std::endl;
        temp = temp2;
        temp2 = temp1 + temp2;
        temp1 = temp;
    }
}

int main(){

    std::cout<< "Hello World!" << std::endl;
    
    int n;
    std::cin >> n;
    fib(n);

    return 0;
}