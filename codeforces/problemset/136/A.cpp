#include <bits/stdc++.h>
#include <vector>

int main() {
    short n, x;

    std::cin >> n;

    std::vector<short> ids(n);

    for(short i = 1; i <= n; i++) {
        std::cin >> x;
        ids[x - 1] = i;
    }

    for(short i = 0; i < n; i++) {
        std::cout << ids[i] << ' ';
    }

    return 0;
}
