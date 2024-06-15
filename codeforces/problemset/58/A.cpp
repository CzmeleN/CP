#include <bits/stdc++.h>

int main() {
    const std::string word = "hello";
    std::string s;
    int it = 0;

    std::cin >> s;

    for (int i = 0; i < s.length(); i++) {
        if (s[i] == word[it]) {
            it++;

            if (it == 5) {
                break;
            }
        }
    }

    std::cout << (it == 5 ? "YES" : "NO") << std::endl;

    return 0;
}
