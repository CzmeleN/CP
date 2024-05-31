#include <iostream>

bool dangerous(std::string s) {
    short len = 1;

    for (short i = 1; i < s.length(); i++) {
        if (s[i - 1] == s[i]) {
            if (++len == 7) {
                return true;
            }
        }
        else {
            len = 1;
        }
    }

    return false;
}

int main() {
    std::string s;

    std::cin >> s;
    std::cout << (dangerous(s) ? "YES" : "NO");

    return 0;
}