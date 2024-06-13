#include <bits/stdc++.h>

int main() {
    int n, k, curr_sum = 0, start = 0, start_low = 0, low_sum, id;

    std::cin >> n >> k;

    std::vector<int> heights(n);

    for (int i = 0; i < n; i++) {
        std::cin >> heights[i];
    }

    for (int i = 0; i < k; i++) {
        curr_sum += heights[i];
    }

    low_sum = curr_sum;

    for (int i = k; i < n; i++) {
        curr_sum = curr_sum + heights[i] - heights[start];
        start++;

        if (curr_sum < low_sum) {
            low_sum = curr_sum;
            start_low = start;
        }
    }

    std::cout << start_low + 1 << std::endl;

    return 0;
}
