#include <iostream>
#include <string>

int main(void){
    int buddaYear;
    std:: cin >> buddaYear;
    if(buddaYear <= 1000 || buddaYear >= 3000){
        printf("sample : 1000 <= buddaYear <= 3000\n");
        return false;
    }
    std::cout << (buddaYear - 543) << std::endl;
    return 0;
}