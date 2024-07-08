#include <bits/stdc++.h>

int main() {
    int n, x;
    std::vector<int> price_shop_counts(100001, 0);
    std::vector<int> dp(100001, 0);
    
    std::cin >> n;

    while (n--) {
        std::cin >> x;
        price_shop_counts[x]++;
    }

    for (int i = 1; i < 100001; i++) {
        dp[i] = dp[i - 1] + price_shop_counts[i];
    }

    std::cin >> n;

    while(n--) {
        std::cin >> x;
        std::cout << (x > 100000 ? dp[100000] : dp[x]) << std::endl;
    }

    return 0;
}
