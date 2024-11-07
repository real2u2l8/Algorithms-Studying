#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    size_t n;
    cin >> n;

    vector<string> str(n);
    vector<vector<string>> len_str(50); 

    
    for (auto& s : str) {
        cin >> s;
        len_str[s.size() - 1].push_back(s);
    }

    
    for (auto& vec : len_str) {
        sort(vec.begin(), vec.end());
        vec.erase(unique(vec.begin(), vec.end()), vec.end());
    }

    
    for (const auto& inner_vec : len_str) {
        for (const auto& elem : inner_vec) {
            cout << elem << '\n';
        }
    }

    return 0;
}
