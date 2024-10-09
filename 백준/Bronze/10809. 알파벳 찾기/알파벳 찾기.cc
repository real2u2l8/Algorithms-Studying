#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    string S;
    cin >> S; 
    vector<int> alphabet(26, -1);  

    for (int i = 0; i < S.size(); i++) {
        if (alphabet[S[i] - 'a'] == -1) {
            alphabet[S[i] - 'a'] = i;
        }
    }

    for (int i = 0; i < 26; i++) {
        cout << alphabet[i] << " ";
    }
    cout << endl;

    return 0;
}
