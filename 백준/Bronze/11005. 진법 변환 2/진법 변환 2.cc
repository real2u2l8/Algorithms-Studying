#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int N, B;
    cin >> N >> B;

    string result = "";
    while (N > 0) {
        int remainder = N % B;
        if (remainder < 10) {
            result += (remainder + '0');  
        } else {
            result += (remainder - 10 + 'A');  
        }
        N /= B;
    }

    
    reverse(result.begin(), result.end());
    cout << result << endl;

    return 0;
}
