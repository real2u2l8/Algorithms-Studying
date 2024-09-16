#include <iostream>
#include <algorithm> 
#include <vector>

int main() {
    int N;
    std::cin >> N;

    std::vector<int> numbers(N);
    

    for (int i = 0; i < N; ++i) {
        std::cin >> numbers[i];
    }

    
    int minValue = *std::min_element(numbers.begin(), numbers.end());
    int maxValue = *std::max_element(numbers.begin(), numbers.end());

    
    std::cout << minValue << " " << maxValue << std::endl;

    return 0;
}
