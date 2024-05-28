#include <iostream>
    
int main() {
    bool x = 0;
    
    for (short i = 0; i < 5; i++) {
        for (short j = 0; j < 5; j++) {
            std::cin >> x;
    
            if (x) {
                std::cout << std::abs(i - 2) + std::abs(j - 2);
            }
        }
    }
    
    return 0;
}