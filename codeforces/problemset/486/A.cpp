#include <bits/stdc++.h>

int main() {
    long long n;

    std::cin >> n;
    std::cout << (n + 1) / 2 * (n % 2 ? -1 : 1) << std::endl;

    return 0;
}
