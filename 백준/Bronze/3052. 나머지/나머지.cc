#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> num(10);
    int compare = 0;

    for(int i = 0; i < num.size(); i++) {
        int n;
        cin >> n;
        num[i] = n % 42;
        
        bool is_unique = true;  

        for(int j = 0; j < i; j++) {
            if(num[i] == num[j]) {
                is_unique = false;  
                break;  
            }
        }

        if(is_unique) {
            compare++;  
        }
    }
    
    cout << compare << endl;  
    return 0;
}
