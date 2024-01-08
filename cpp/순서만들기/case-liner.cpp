#include <iostream>
#include <random>

using namespace std;

class CaseNumber{
    private:
        int case[6] ={123,132,213,231,312,321};
        int subj[40]= {0,}; 
    public:
        CaseNumber();
    };

    CaseNumber::CaseNumber(){
        int subj_n = 40;
        for(int i = 0, i < 40, i++){
            this->subj[i] = i;
        }

        int sub, res = 0;
        sub = (subj_n / 6); //나눈 결과값 6
        res = (subj_n % 6); // 나머지  4
        std::random_device rd;
        std::mt19937 gen(rd());
        std::uniform_int_distribution<int> dis(1, sub);
        for(int i = 0, i < 6, i ++){ //case 0~6 중 하나를 골라 
                
        }
}


int main(){

    return 0;
}