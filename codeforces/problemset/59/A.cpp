#include <iostream>

char lower(char x) {
    if (x <= 'Z') {
        return x + 32;
    }

    return x;
}

char upper(char x) {
    if (x > 'Z') {
        return x - 32;
    }

    return x;
}

int main() {
    short up_count = 0;
    std::string s;

    std::cin >> s;

    for (short i = 0; i < s.length(); i++) {
        if (s[i] <= 'Z') {
            up_count++;
        }
    }

    if (up_count > s.length() / 2) {
        for (short i = 0; i < s.length(); i++) {
            std::cout << upper(s[i]);
        }
    }
    else {
        for (short i = 0; i < s.length(); i++) {
            std::cout << lower(s[i]);
        }
    }
    

    return 0;
}