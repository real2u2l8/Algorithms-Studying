

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<bool> student(30, false); 
    vector<int> noSubmit; 

    
    for (int i = 0; i < 28; i++) {
        int n;
        cin >> n;
        student[n - 1] = true; 
    }

    
    for (int i = 0; i < student.size(); i++) {
        if (student[i] == false) {
            noSubmit.push_back(i + 1); 
        }
    }

    cout << noSubmit[0] << endl;
    cout << noSubmit[1] << endl;


    return 0;
}
