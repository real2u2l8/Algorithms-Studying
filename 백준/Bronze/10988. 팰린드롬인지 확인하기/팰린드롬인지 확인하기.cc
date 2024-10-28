#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string s;
    string rs;
    cin >> s;
    rs = s;
    reverse(s.begin(), s.end());
    if(s == rs){
        cout << 1 << endl;
    } else{
        cout << 0 << endl;
    }
    return 0;
}
