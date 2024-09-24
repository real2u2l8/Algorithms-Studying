#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<int> bucket(n);
    for (int i = 0; i < n; i++) {
        bucket[i] = i + 1;
    }

    for (int i = 0; i < m; i++) {
        int b1, b2;
        cin >> b1 >> b2;

        swap(bucket[b1 - 1], bucket[b2 - 1]);
    }

    for (int i = 0; i < bucket.size(); i++) {
        cout << bucket[i] << " ";
    }

    return 0;
}
