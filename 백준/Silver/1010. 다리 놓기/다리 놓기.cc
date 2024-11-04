#include <iostream>
#include <vector>
#include <numeric> 
using namespace std;


long long combination(int n, int r) {
    if (r > n - r) r = n - r; 
    long long result = 1;
    for (int i = 0; i < r; ++i) {
        result *= (n - i);
        result /= (i + 1);
    }
    return result;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    vector<long long> results;

    while (T--) {
        int N, M;
        cin >> N >> M;
        results.push_back(combination(M, N));
    }

    for (const auto& result : results) {
        cout << result << '\n';
    }

    return 0;
}
