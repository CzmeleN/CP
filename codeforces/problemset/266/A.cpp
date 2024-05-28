#include <iostream>

int main() {
    short n, res = 0;
    std::string s;

    std::cin >> n >> s;

    for (short i = 0; i < n - 1; i++) {
        if (s[i] == s[i + 1]) {
            res++;
        }
    }

    std::cout << res;

    return 0;
}