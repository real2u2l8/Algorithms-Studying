#include <iostream>
#include <algorithm>

int main() {
    int dice[3];
    std::cin >> dice[0] >> dice[1] >> dice[2];

    std::sort(dice, dice + 3);

    int prize;
    if (dice[0] == dice[1] && dice[1] == dice[2]) {
        // 같은 눈이 3개인 경우
        prize = 10000 + dice[0] * 1000;
    } else if (dice[0] == dice[1] || dice[1] == dice[2]) {
        // 같은 눈이 2개인 경우
        prize = 1000 + dice[1] * 100;
    } else {
        // 모두 다른 눈인 경우
        prize = dice[2] * 100;
    }

    std::cout << prize << std::endl;
    return 0;
}
