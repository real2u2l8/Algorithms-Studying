#include <iostream>
using namespace std;
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
    cout << "피보나치 수열\n" ;
    cout << "몇 항 까지 출력할 까요?\n:: ";
    cin >> i; 

    for (int n = 1; n <= i; n++){
    cout << funcFibonacci(n) << endl;
    }
    

    return false;
}