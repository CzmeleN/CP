#include <iostream>
    
bool translated(std::string s1, std::string s2) {
    short len = s1.length();
    
    for (short i = 0; i < len; i++) {
        if (s1[i] != s2[len - 1 - i]) {
            return false;
        }
    }
    
    return true;
}
    
int main() {
    std::string s1, s2;
    
    std::cin >> s1 >> s2;
    std::cout << (translated(s1, s2) ? "YES" : "NO");
    
    return 0;
}