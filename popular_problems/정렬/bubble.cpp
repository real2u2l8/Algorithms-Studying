#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void bubble(vector<int>& arr, int size) {
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

    // 입력 받기
    for (auto& in : arr) {  
        cin >> in;
    }

    // 버블 정렬 수행
    bubble(arr, size);

    // 정렬된 배열 출력
    for (auto& data : arr) {
        cout << data << " ";
    }
    cout << endl;

    return 0;
}
