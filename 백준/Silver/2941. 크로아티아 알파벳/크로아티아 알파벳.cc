#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    string s;
    vector<string> croatian = {"c=", "c-", "dz=", "d-", "lj", "nj", "s=", "z="};
    int sum = 0;
    cin >> s;
    
    for (const auto& cro : croatian) {
        size_t pos = s.find(cro);
        while (pos != string::npos) {
            sum++;
            s.replace(pos, cro.length(), " ");  
            pos = s.find(cro, pos + 1);         
        }
    }

    
    for (char c : s) {
        if (c != ' ') sum++;
    }

    cout << sum << endl;
    return 0;
}
