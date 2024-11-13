#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;
    int count = 0;
    int currentNumber = 666;

    while (true) {
        
        if (to_string(currentNumber).find("666") != string::npos) {
            count++; 
            if (count == n) { 
                cout << currentNumber << endl;
                break;
            }
        }
        currentNumber++; 
    }

    return 0;
}
