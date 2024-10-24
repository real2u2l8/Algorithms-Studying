#include <iostream>
#include <string>

using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string s; 
    while(getline(cin, s)){
        cout << s << endl;
    }
    
    
    return 0;
}