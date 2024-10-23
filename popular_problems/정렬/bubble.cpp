//버블 정렬 구현 

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
// 버블 정렬 함수 (size 인자를 없애고, 벡터 크기를 직접 가져오도록 변경)
void bubble(vector<int>& arr) {
    int size = arr.size();  // 벡터 크기 가져오기
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

int main() {
    int size;
    cin >> size;

    vector<int> arr(size);

    // 입력 받기 (범위 기반 for문 사용)
    for (auto& in : arr) {  
        cin >> in;
    }

    // 버블 정렬 수행
    bubble(arr);

    // 정렬된 배열 출력 (const auto&로 요소를 수정하지 않음)
    for (const auto& data : arr) {
        cout << data << " ";
    }
    cout << endl;

    return 0;
}
