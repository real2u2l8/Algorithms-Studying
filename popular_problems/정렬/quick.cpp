#include <iostream>
#include <vector>
#include <algorithm> 

using namespace std;

void quickSort(vector<int>& A, int S, int E, int K);
int partition(vector<int>& A, int S, int E);

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, K;
    cin >> N >> K;

    vector<int> A(N);
    
    for (auto& element : A) {
        cin >> element;
    }
    
    quickSort(A, 0, N - 1, K - 1);
    cout << A[K - 1] << endl;

    return 0;
}

void quickSort(vector<int>& A, int S, int E, int K) {
    if (S >= E) return; 

    int pivot = partition(A, S, E);
    
    if (pivot == K) {
        return;
    } else if (K < pivot) {
        quickSort(A, S, pivot - 1, K);
    } else {
        quickSort(A, pivot + 1, E, K);
    }
}

int partition(vector<int>& A, int S, int E) {
    if (S + 1 == E) {
        if (A[S] > A[E]) {
            swap(A[S], A[E]);
        }
        return E;
    }

    int M = (S + E) / 2;
    swap(A[S], A[M]);

    int pivot = A[S];
    int i = S + 1;
    int j = E;

    while (i <= j) {
        while (i <= E && A[i] < pivot) {
            i++;
        }
        while (j >= S && A[j] > pivot) {
            j--;
        }
        if (i <= j) {
            swap(A[i], A[j]);
            i++;
            j--;
        }
    }

    swap(A[S], A[j]);
    return j;
}
