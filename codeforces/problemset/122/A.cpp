#include <bits/stdc++.h>

bool lucky(short n) {
    while (n) {
        if (n % 10 == 4 || n % 10 == 7) {
            n /= 10;
        }
        else {
            return false;
        }
    }

    return true;
}

bool almost_lucky(short n) {
    for (short i = 4; i <= n; i++) {
        if (lucky(i) && n % i == 0) {
            return true;
        }
    }

    return false;
}

int main() {
    short n;

    std::cin >> n;
    std::cout << (almost_lucky(n) ? "YES" : "NO");

    return 0;
}
