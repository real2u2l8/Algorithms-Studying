#include <iostream>

using namespace std;

int main(){
    int a, b;
    cin >> a;
    cin >> b;
    cout << a * ((b%100)%10) << endl;
    cout << a * ((b/10)%10) << endl;
    cout << a * ((b/100)%10) << endl;
    cout << (a * ((b%100)%10)) + ((a * ((b/10)%10)) * 10) + ((a * ((b/100)%10)) * 100) <<endl;
    
    return false;
}
