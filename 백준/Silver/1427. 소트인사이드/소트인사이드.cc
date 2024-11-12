#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string n;
    cin >> n;

    vector<char> data(n.begin(), n.end());

    sort(data.rbegin(), data.rend());

    for (const auto& d : data) {
        cout << d;
    }
    cout << endl;

    return 0;
}
