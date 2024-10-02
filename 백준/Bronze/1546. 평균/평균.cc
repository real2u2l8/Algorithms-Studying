#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int m, n;
    cin >> n;
    vector<float> grade(n);
    vector<float> fix(n);
    float sum = 0;
    for(int i = 0; i < grade.size(); i++){
        cin >> grade[i];
    }
    m = grade[0];
    for(int i = 0; i < grade.size(); i++){
        if(m < grade[i]){
            m = grade[i];
        }
    }    
    for(int i = 0; i < grade.size(); i++){
        fix[i] = (grade[i] / m)*100;
        sum += fix[i];
    }
    sum = (sum/n);
    cout << sum << endl;
   
    return 0;
}