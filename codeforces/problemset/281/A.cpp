#include <iostream>

char upper(char x) {
    if (x > 'Z') {
        return x - 32;
    }

    return x;
}

int main() {
    std::string s;

    std::cin >> s;
    s[0] = upper(s[0]);
    std::cout << s;

    return 0;
}