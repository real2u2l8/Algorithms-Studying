#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    // 첫 번째 N줄: 정삼각형 위쪽 부분
    for (int i = 1; i <= N; ++i) {
        // 왼쪽 여백 출력
        for (int j = 0; j < N - i; ++j) {
            cout << " ";
        }
        // 별 출력
        for (int j = 0; j < 2 * i - 1; ++j) {
            cout << "*";
        }
        cout << endl;
    }

    // 다음 N-1줄: 정삼각형 아래쪽 부분
    for (int i = N - 1; i > 0; --i) {
        // 왼쪽 여백 출력
        for (int j = 0; j < N - i; ++j) {
            cout << " ";
        }
        // 별 출력
        for (int j = 0; j < 2 * i - 1; ++j) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
