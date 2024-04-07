#include <iostream>
using namespace std;

int main(){
    int ch, cm = 0; //Current HM
    int om = 0; // Oven M
    cin >> ch >> cm >> om;

    if((cm + om) >= 59){ // 60분을 넘길때,
        if(ch == 23) {
            ch = 0;
        }else {
            ch += 1; 
        }
        cm = (cm + om) - 60;
        while(cm >= 59){ //60분 이내로 반복문
            if(ch == 23) {
                ch = 0;
            }else {
                ch += 1; 
            }
            cm = cm - 60;
        }
    }else { //60분을 넘지 못할때,
        cm = cm + om;
    }

    cout << ch << " " << cm << endl;

    return 0;
}