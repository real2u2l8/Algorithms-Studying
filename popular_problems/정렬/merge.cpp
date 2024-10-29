#include <iostream>
#include <vector>

using namespace std;

vector<int> merge(const vector<int>& left, const vector<int>& right) {
    vector<int> sorted;
    size_t l = 0, r = 0;

    while (l < left.size() && r < right.size()) {
        if (left[l] < right[r]) {
            sorted.push_back(left[l++]);
        } else {
            sorted.push_back(right[r++]);
        }
    }

    
    while (l < left.size()) sorted.push_back(left[l++]);
    while (r < right.size()) sorted.push_back(right[r++]);

    return sorted;
}


vector<int> mergeSort(vector<int> data) {
    if (data.size() <= 1) return data;

    using diff_t = vector<int>::difference_type;
    diff_t mid = static_cast<diff_t>(data.size() / 2);
    vector<int> left(data.begin(), data.begin() + mid);
    vector<int> right(data.begin() + mid, data.end());
    
    left = mergeSort(left);
    right = mergeSort(right);
    
    return merge(left, right);
}

int main() {
    size_t n;
    cin >> n;
    vector<int> unsorted(n);
    
    for (auto& in : unsorted) {
        cin >> in;
    }
    
    vector<int> sorted = mergeSort(unsorted);
    
    for (const auto& num : sorted) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
