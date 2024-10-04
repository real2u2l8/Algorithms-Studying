/*
문자열 my_string, overwrite_string과 정수 s가 주어진다.
문자열 my_string의 인덱스 s부터 overwrite_string의 길이만큼을
문자열 overwrite_string으로 바꾼 문자열을 return 하는 solution 함수를 작성하라.
*/

#include <string>
#include <vector>

using namespace std;

string solution(string my_string, string overwrite_string, int s) {
    vector<char> vec_str;
    
    for(int i = 0; i < s; i++){
        if(s == i) {continue;}
        vec_str.push_back(my_string[i]);
    }
    
    vector<char> vec_ans(vec_str);
    
    for(int i = 0; i < overwrite_string.size(); i++){
        if(i == overwrite_string.size()){
            continue;
        }
        vec_ans.push_back(overwrite_string[i]);
    }
    string answer(vec_ans.begin(), vec_ans.end());
    return answer;
}