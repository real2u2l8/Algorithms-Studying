#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, group_word_count = 0;
    cin >> n;
    vector<string> words(n);

    // 단어 입력
    for (auto& word : words) {
        cin >> word;
    }

    // 그룹 단어 검사
    for (const auto& word : words) {
        vector<bool> check(26, false);  // 알파벳 사용 여부 체크
        bool is_group_word = true;

        for (size_t i = 0; i < word.size(); i++) {
            int index = word[i] - 'a';

            // 이미 등장했던 문자라면 그룹 단어가 아님
            if (check[index]) {
                if (word[i] != word[i - 1]) {
                    is_group_word = false;
                    break;
                }
            }
            check[index] = true;  // 등장한 문자 기록
        }

        if (is_group_word) {
            group_word_count++;
        }
    }

    cout << group_word_count << endl;

    return 0;
}
