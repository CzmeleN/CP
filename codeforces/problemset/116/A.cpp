#include <iostream>

int main() {
    short n, cap = 0, max = 0, x;

    std::cin >> n;

    while (n--) {
        std::cin >> x;
        cap -= x;
        std::cin >> x;
        cap += x;

        if (cap > max) {
            max = cap;
        }
    }

    std::cout << max;

    return 0;
}
