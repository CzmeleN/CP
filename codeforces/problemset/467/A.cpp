#include <bits/stdc++.h>

int main() {
    short n, p, q, res = 0;

    std::cin >> n;

    while (n--) {
        std::cin >> p >> q;

        if (q - p >= 2) {
            res++;
        }
    }

    std::cout << res << std::endl;

    return 0;
}
