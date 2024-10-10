#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    int T;
    cin >> T;
    vector<int> R(T);  
    vector<string> cs(T);  

    for (int i = 0; i < T; i++) {
        string S;
        cin >> R[i];  
        cin >> S; 

        for (int j = 0; j < S.size(); j++) {
            for (int k = 0; k < R[i]; k++) {
                cs[i] += S[j];
            }
        }
    }

    for (int i = 0; i < T; i++) {
        cout << cs[i] << endl;
    }

    return 0;
}
