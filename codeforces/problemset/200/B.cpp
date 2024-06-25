#include <bits/stdc++.h>

int main() {
    short n;
    float res = 0, x;

    std::cin >> n;

    for (short i = 0; i < n; i++) {
        std::cin >> x;
        res += x;
    }

    std::cout << res / static_cast<float>(n);

    return 0;
}
