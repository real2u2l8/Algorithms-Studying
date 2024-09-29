#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n,m; // n-바구니 갯수, m 몇번 reverse
    cin >> n >> m;

    vector<int> bucket(n);
    for(int i = 0; i < bucket.size(); i++){
        bucket[i] = i+1;
    }
    for(int k = 0; k < m; k++){
        int i,j;
        cin >> i >> j;
        reverse(bucket.begin() + (i-1), bucket.begin() + j);
    }
    for(int i = 0; i < bucket.size(); i++){
        printf("%d ", bucket[i]);
    }
    return 0;
}