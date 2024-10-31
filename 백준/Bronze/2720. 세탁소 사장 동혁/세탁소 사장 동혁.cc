#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    size_t N;
    cin >> N;
    vector<int> change(N);

    
    for (auto& amount : change) {
        cin >> amount;
    }
    
    for (auto& c : change) {
        int quarter = c / 25;   
        c %= 25;                

        int dime = c / 10;      
        c %= 10;                

        int nickel = c / 5;     
        c %= 5;                 

        int penny = c;          

        cout << quarter << ' ' << dime << ' ' << nickel << ' ' << penny << endl;
    }

    return 0;
}
