#include <iostream>

int main() {
    short n, curr;
    short fc[3] = {0, 0, 0};

    std::cin >> n;

    while (n--) {
        for (short i = 0; i < 3; i++) {
            std::cin >> curr;
            fc[i] += curr;
        }
    }

    if (fc[0] == 0 && fc[1] == 0 && fc[2] == 0) {
        std::cout << "YES";
    }
    else {
        std::cout << "NO";
    }

    return 0;
}