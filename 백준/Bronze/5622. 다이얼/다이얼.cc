#include <iostream>
#include <string>

using namespace std;
// 아스키 코드로 이용한 풀이, 속도, 코드길이 개선
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string s;
    int sum = 0;
    cin >> s;

    for (char& c : s) {
        if (c >= 'A' && c <= 'C') {
            sum += 3;
        } else if (c >= 'D' && c <= 'F') {
            sum += 4;
        } else if (c >= 'G' && c <= 'I') {
            sum += 5;
        } else if (c >= 'J' && c <= 'L') {
            sum += 6;
        } else if (c >= 'M' && c <= 'O') {
            sum += 7;
        } else if (c >= 'P' && c <= 'S') {
            sum += 8;
        } else if (c >= 'T' && c <= 'V') {
            sum += 9;
        } else if (c >= 'W' && c <= 'Z') {
            sum += 10;
        }
    }

    cout << sum << endl;

    return 0;
}
