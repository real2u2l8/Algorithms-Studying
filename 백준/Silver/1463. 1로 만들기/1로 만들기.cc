#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N;
    cin >> N;

    // DP 배열을 선언하고 초기화 (최대 N이 10^6이므로 충분한 크기로)
    vector<int> dp(N + 1, 0);

    // DP 점화식을 이용하여 최소 연산 횟수를 계산
    for (int i = 2; i <= N; ++i) {
        // 먼저 1을 빼는 연산을 고려
        dp[i] = dp[i - 1] + 1;

        // 2로 나누어 떨어질 때
        if (i % 2 == 0) {
            dp[i] = min(dp[i], dp[i / 2] + 1);
        }

        // 3으로 나누어 떨어질 때
        if (i % 3 == 0) {
            dp[i] = min(dp[i], dp[i / 3] + 1);
        }
    }

    // 최종적으로 dp[N]에는 N을 1로 만들기 위한 최소 연산 횟수가 저장됨
    cout << dp[N] << endl;

    return 0;
}
