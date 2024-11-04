#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;

    int side = (1 << n) + 1; 
    int dot = side * side;    

    cout << dot << endl;
    return 0;
}
