#include <bits/stdc++.h>

int main() {
    short n, t;
    std::string queue, new_queue;

    std::cin >> n >> t >> queue;

    while (t--) {
        new_queue = queue;

        for (short i = 1; i < n; i++) {
            if (queue[i] == 'G' && queue[i - 1] == 'B') {
                new_queue[i] = 'B';
                new_queue[i - 1] = 'G';
            }
        }

        queue = new_queue;
    }

    std::cout << queue << std::endl;

    return 0;
}
