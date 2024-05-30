#include <iostream>

int cost(int x0, int n) {
    int res = 0;

    while (n > 0) {
        res += x0 * n;
        n--;
    }

    return res;
}

int main() {
    int k, n, w;

    std::cin >> k >> n >> w;
    std::cout << (cost(k, w) < n ? 0 : cost(k, w) - n); 

    return 0;
}