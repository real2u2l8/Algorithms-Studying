#include <iostream>
using namespace std;

int main() {
    long long N;
    cin >> N;

    if (N == 1) {
        cout << 1 << endl;
        return 0;
    }

    int layer = 1; // 현재 층을 나타내는 변수
    long long end_of_layer = 1; // 각 층의 마지막 방 번호
    
    while (end_of_layer < N) {
        end_of_layer += 6 * layer; // 다음 층의 마지막 방 번호
        layer++;
    }

    cout << layer << endl;
    return 0;
}
