#include <bits/stdc++.h>

bool test() {
    int x, y, px = 0, py = 0;
    std::cin >> x >> y;

    while (y + 1 >= py) {
        px++;
        py--;

        if (px >= x) {
            return true;
        }

        y--;
    }

    return false;
}

int main() {
    int n;

    std::cin >> n;

    while(n--) {
        std::cout << (test() ? "YES" : "NO") << std::endl;
    }

    return 0;
}
