#include <iostream>
/*basic Recursive*/
int funcFibonacci(int n){
    if(n == 1){
        return 1;
    }
    if(n == 2){
        return 1;
    }
    return funcFibonacci(n-1) + funcFibonacci(n-2);
}

int main(void){
    int i = 0;
    std::cout << "피보나치 수열\n" ;
    std::cout << "몇 항 까지 출력할 까요?\n:: ";
    std::cin >> i; 

    for (int n = 1; n <= i; n++){
        std::cout << funcFibonacci(n) << std::endl;
    }
    

    return false;
}