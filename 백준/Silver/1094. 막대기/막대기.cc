#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int X;
    cin >> X;

    int stick_count = 0;
    while (X > 0) {
        
        stick_count += (X & 1);
        
        X >>= 1;
    }

    cout << stick_count << endl;
    return 0;
}
