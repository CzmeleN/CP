#include <bits/stdc++.h>

int main() {
    std::string s1, s2, res = "";
    std::cin >> s1 >> s2;

    for (int i = 0; i < s1.length(); i++) {
        res += (s1[i] != s2[i] ? "1" : "0");
    }

    std::cout << res;

    return 0;
}
