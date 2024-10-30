#include <iostream>
#include <vector>
#include <string>
#include <tuple>
#include <unordered_map>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    vector<tuple<float, float, string>> score(20);  
    unordered_map<string, float> grade_map = { 
        {"A+", 4.5}, {"A0", 4.0}, {"B+", 3.5}, {"B0", 3.0},
        {"C+", 2.5}, {"C0", 2.0}, {"D+", 1.5}, {"D0", 1.0},
        {"F", 0.0}, {"P", -1.0}  
    };

    
    for (auto& data : score) {
        string subject, grade;
        float credit;
        cin >> subject >> credit >> grade;
        data = make_tuple(credit, grade_map[grade], grade);
    }

    float total_credit = 0.0;  
    float weighted_sum = 0.0;  

    
    for (const auto& data : score) {
        float credit = get<0>(data);
        float grade_point = get<1>(data);
        string grade = get<2>(data);

        
        if (grade != "P") {
            total_credit += credit;
            weighted_sum += credit * grade_point;
        }
    }

    
    float major_gpa = weighted_sum / total_credit;
    cout << fixed;
    cout.precision(6);  
    cout << major_gpa << endl;

    return 0;
}
