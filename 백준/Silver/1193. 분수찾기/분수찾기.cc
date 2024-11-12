#include <iostream>
using namespace std;

int main() {
    int X;
    cin >> X;

    int diagonal = 1;
    int sum = 0;

    while (sum + diagonal < X) {
        sum += diagonal;
        diagonal++;
    }

    int position_in_diagonal = X - sum;

    int numerator, denominator;

    if (diagonal % 2 == 0) {
        numerator = position_in_diagonal;
        denominator = diagonal - position_in_diagonal + 1;
    } else {
        numerator = diagonal - position_in_diagonal + 1;
        denominator = position_in_diagonal;
    }

    cout << numerator << "/" << denominator << endl;

    return 0;
}
