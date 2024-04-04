#include <iostream>
using namespace std;

int main(){
    int h = 0;
    int m = 0;
    int ch = 0;
    int cm = 0;

    cin >> h >> m; // 시간과 분을 입력 받음

    if (m - 45 < 0) { // 분에서 45를 뺐을 때 음수가 되는 경우
        if (h == 0) { // 자정인 경우
            ch = 23; // 시간을 23으로 설정
        } else {
            ch = h - 1; // 시간에서 1을 감소
        }
        cm = 60 + (m - 45); // 분을 조정
    } else {
        ch = h; // 시간 변경 없음
        cm = m - 45; // 분에서 45를 뺌
    }
    cout << ch << " " << cm << endl; // 결과 출력
    return 0;
}