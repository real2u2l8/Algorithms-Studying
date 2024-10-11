#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<string> getWords(string& str) {
    // 공백만 있는 문자열 처리
    if (str.find_first_not_of(' ') == string::npos) {
        return {};  // 빈 벡터 반환
    }
    
    // 앞뒤 공백 제거
    size_t first_char = str.find_first_not_of(' ');
    size_t last_char = str.find_last_not_of(' ');
    
    if (first_char != string::npos && last_char != string::npos) {
        str = str.substr(first_char, last_char - first_char + 1);
    }

    char blank = ' ';
    vector<string> tokens;
    size_t start = 0;
    size_t end = str.find(blank);

    // 구분자를 기준으로 문자열을 나눔
    while (end != string::npos) {
        tokens.push_back(str.substr(start, end - start));
        start = end + 1;
        end = str.find(blank, start);
    }

    tokens.push_back(str.substr(start));  // 마지막 단어 추가
    return tokens;
}

int main() {
    string S;
    getline(cin, S);  // 줄바꿈으로 입력 완료 처리
    vector<string> words = getWords(S);
    
    // 단어의 개수를 출력
    cout << words.size() << endl;

    return 0;
}
