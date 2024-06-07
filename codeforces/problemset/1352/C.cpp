#include <bits/stdc++.h>

void test() {
    int n, k;

    std::cin >> n >> k;
    k += k / (n - 1);
    
    if (k % n == 0) {
        k--;
    }

    std::cout << k << std::endl;
}

int main() {
    std::ios_base::sync_with_stdio(0);
    std::cin.tie(0);
    std::cout.tie(0);

    int t;
    std::cin >> t;

    while (t--) {
        test();
    }

    return 0;
}
