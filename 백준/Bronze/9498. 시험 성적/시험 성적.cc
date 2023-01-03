#include <iostream>

int main(void){
    int score;
    while(true){
        std::cin >> score;
        if(!(0 <= score <= 100)){
            std::cout << "0 <= score <= 100" << std::endl;
            continue;
        }else{
            break;
        }
    }

    score = score / 10;
    
    switch (score){
    case 10:
        std::cout << "A" << std::endl;
        break;
    case 9:
        std::cout << "A" << std::endl;
        break;
    case 8:
        std::cout << "B" << std::endl;
        break;
    case 7:
        std::cout << "C" << std::endl;
        break;
    case 6:
        std::cout << "D" << std::endl;
        break;
    default:
        std::cout << "F" << std::endl;
        break;
    }
    
    return 0;
}