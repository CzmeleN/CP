#include <bits/stdc++.h>

int main() {
    int a, b, c;

    std::cin >> a >> b >> c;

    std::cout << std::max({a * b * c, (a + b) * c, a * (b + c), a + b + c}) << std::endl;

    return 0;
}
