#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<int> bucket(n, 0);

    for (int x = 0; x < m; x++) {
        int i, j, k; 
        cin >> i >> j >> k;


        for (int index = i - 1; index <= j - 1; index++) {
            bucket[index] = k;
        }
    }

    for (int i = 0; i < n; i++) {
        cout << bucket[i] << " ";
    }

    return 0;
}
