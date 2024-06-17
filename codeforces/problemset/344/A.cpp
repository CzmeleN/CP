#include <bits/stdc++.h>

int main() {
    int n, x, last, res = 1;

    std::cin >> n >> x;
    last = x;

    while (--n) {
        std::cin >> x;

        if (x != last) {
            res++;
        }

        last = x;
    }

    std::cout << res << std::endl;

    return 0;
}
