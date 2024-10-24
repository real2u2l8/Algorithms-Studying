#include <iostream>
#include <string>
#include <cmath>  

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string N;
    int B;     

    cin >> N >> B;

    int result = 0;
    int power = 0;  

    for (int i = N.size() - 1; i >= 0; --i) {
        char c = N[i];
        int value;

        if (c >= '0' && c <= '9') {
            value = c - '0';
        }
        
        else {
            value = c - 'A' + 10;
        }

        
        result += value * pow(B, power);
        power++;
    }

    
    cout << result << endl;

    return 0;
}
