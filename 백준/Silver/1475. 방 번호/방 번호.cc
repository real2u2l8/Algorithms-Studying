#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string num;
    vector<int> n_set(9, 0); 
    cin >> num;

    for (auto& n : num) {
        int digit = static_cast<int>(n - '0');
        if (digit == 6 || digit == 9) {
            n_set[6]++; 
        } else {
            n_set[static_cast<size_t>(digit)]++;
        }
    }

    
    n_set[6] = (n_set[6] + 1) / 2;

    
    int max_count = *max_element(n_set.begin(), n_set.end());
    cout << max_count << endl;

    return 0;
}
