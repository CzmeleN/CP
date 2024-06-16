#include <bits/stdc++.h>

bool test() {
    short n, x;
    
    std::cin >> n;

    while (n--) {
        std::cin >> x;

        if (x == 1) {
            return true;
        }
    }

    return false;
}

int main() {
    std::cout << (test() ? "HARD" : "EASY");

    return 0;
}
