/*
    홀짝 구분하기
    입력값을 받아서
    홀이면 n is odd 출력
    짝이면 n is even 출력

*/

#include <iostream>

using namespace std;

int main(void) {
    int n;
    cin >> n;
    
    if(n%2 != 0){
        cout << n << " is odd" << endl;
    }else {
        cout << n << " is even" << endl;
    }
    return 0;
}