#include <iostream>
 
bool lucky(std::string s) {
    for (short i = 0; i < s.length(); i++) {
        if (s[i] != '4' && s[i] != '7') {
            return false;
        }
    }
    return true;
}

bool nearly_lucky(std::string s) {
    short luckies = 0;

    for (short i = 0; i < s.length(); i++) {
        if (s[i] == '4' || s[i] == '7') {
            luckies++;
        }
    }

    return lucky(std::to_string(luckies));;
}

int main() {
    std::string s;
    
    std::cin >> s;
    std::cout << (nearly_lucky(s) ? "YES" : "NO");
 
    return 0;
}