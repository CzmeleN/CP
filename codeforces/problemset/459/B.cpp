#include <bits/stdc++.h>

long long newton_2(long long n) {
    return n * (n - 1) / 2;
}

int main() {
    int n;
    long long min = 10e10, max = 0, curr, min_ct, max_ct;

    std::cin >> n;

    while (n--) {
        std::cin >> curr;
        
        if (curr > max) {
            max = curr;
            max_ct = 1;
        }
        else if (curr == max) {
            max_ct++;
        }

        if (curr < min) {
            min = curr;
            min_ct = 1;
        }
        else if (curr == min) {
            min_ct++;
        }
    }

    std::cout << max - min << ' ' << (min == max ? newton_2(max_ct) : min_ct * max_ct);

    return 0;
}
