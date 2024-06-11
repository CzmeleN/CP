#include <algorithm>
#include <bits/stdc++.h>

short pieces() {
    short n, to_cmp;
    short slice[3];
    std::cin >> n;

    for (short i = 0; i < 3; i++) {
        std::cin >> slice[i];
    }

    std::vector<short> dp(n + 1, -1);

    dp[0] = 0;

    for (short i = 1; i <= n; i++) {
        for (short j = 0; j < 3; j++) {
            if (i >= slice[j] && dp[i - slice[j]] >= 0) {
                to_cmp = dp[i - slice[j]] + 1;
                dp[i] = std::max(dp[i], to_cmp);
            }
        }    
    }
 
    return dp[n];
}

int main() {
    std::cout << pieces();

    return 0;
}
