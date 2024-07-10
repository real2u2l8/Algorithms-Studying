#include <iostream>

int main() {
    while(true){
        int a;
        int b;
        std::cin >> a;
        std::cin >> b;
        if(a==0 && b==0){
            break;
        }
        std::cout << a+b << std::endl;
    }

    return 0;
}

