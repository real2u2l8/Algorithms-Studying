#include <iostream>
#include <string>

using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int piece[6] = {1,1,2,2,2,8};

    for(auto& p : piece){
        int temp;
        cin >> temp;
        p -= temp;
    }
    for(auto& res : piece){
        cout << res << " ";
    }
    cout << endl;
    return 0;
}