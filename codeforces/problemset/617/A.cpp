#include <iostream>

int main() {
    int x, y, res = 0;

    std::cin >> x;

    for (int i = 5; i > 0; i--) {
        y = x / i;

        if (y) {
            x -= y * i;
            res += y;
        }
    }

    std::cout << res;

    return 0;
}