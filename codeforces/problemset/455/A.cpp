#include <bits/stdc++.h>

const int max = 1e5 + 7;

int main() {
    std::ios_base::sync_with_stdio(0);
    std::cin.tie(0);
    std::cout.tie(0);

    int n;
    long long a;
    std::vector<long long> sums(max, 0);
    std::vector<long long> dp(max, 0);

    std::cin >> n;

    while (n--) {
        std::cin >> a;
        sums[a] += a;
    }

    dp[1] = sums[1];
    dp[2] = std::max(dp[1], sums[2]);

    for (int i = 3; i < max; i++) {
        dp[i] = std::max(dp[i - 2] + sums[i], dp[i - 1]);
    }

    std::cout << std::max(dp[max - 2] + sums[max - 1], dp[max - 1]);

    return 0;
}
