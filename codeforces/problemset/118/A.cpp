#include <iostream>
#include <set>

char lower(char x) {
    if (x <= 'Z') {
        return x + 32;
    }
    return x;
}

int main() {
    char x;
    std::string s;
    std::set<char> vowels = {'a', 'e', 'i', 'o', 'u', 'y'};

    std::cin >> s;
    
    for(short i = 0; i < s.length(); i++) {
        x = lower(s[i]);

        if (!vowels.count(x)) {
            std::cout << '.' << x;
        }
    }

    return 0;
}
