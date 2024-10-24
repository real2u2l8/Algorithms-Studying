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

/*
// c++ STL, 함수를 최대한 사용함
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <tuple>
// 1, 2[ABC], 3[DEF], 4[GHI], 5[JKL], 6[MNO], 7[PQRS], 8[TUV], 9[WXYZ], 
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    vector<tuple<int, int, string>> dial = {
        {3, 2, "ABC"},
        {4, 3, "DEF"},
        {5, 4, "GHI"},
        {6, 5, "JKL"},
        {7, 6, "MNO"},
        {8, 7, "PQRS"},
        {9, 8, "TUV"},
        {10, 9, "WXYZ"}
    };
    string s;
    int sum = 0;
    cin >> s;

    for(auto& c : s){ //받은 문자를 자름
        for(auto& data : dial){//dial 접근
            const string& str = get<2>(data);
            if(str.find(c) != string::npos){ //다이얼의 문자 확인
                sum += get<0>(data);
                break;
            }
        }
    }  

    cout << sum << endl;
    return 0;
}
        



*/