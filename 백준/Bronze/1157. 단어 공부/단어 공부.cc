#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string s;
    cin >> s;
    vector<int> check(26, 0);  

    
    for (char c : s) {
        check[static_cast<size_t>(toupper(c) - 'A')]++;
    }

    int max_freq = 0;   
    char max_char = '?';
    bool multiple = false;

    for (size_t i = 0; i < check.size(); i++) {
        if (check[i] > max_freq) {
            max_freq = check[i];
            max_char = static_cast<char>('A' + i);
            multiple = false;
        } else if (check[i] == max_freq) {
            multiple = true;
        }
    }

    
    cout << (multiple ? '?' : max_char) << endl;

    return 0;
}
