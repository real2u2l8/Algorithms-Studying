#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int i=0;
    int T;
    cin >> T;
    vector<string> s(T);

    for (int i = 0; i < T; i++) {
        cin >> s[i]; 
    }
    for(const string& tempC : s){
        cout << tempC[0] << tempC[tempC.size()-1] << endl;
    }
    return 0;
}
/*

*/