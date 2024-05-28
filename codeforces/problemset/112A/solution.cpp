#include <iostream>
    
char norm(char x) {
    if (x > 'Z') {
        return x - 32;
    }
    
    return x;
}
    
short cmp(std::string s1, std::string s2) {
    for (short i = 0; i < s1.length(); i++) {
        if (norm(s1[i]) > norm(s2[i])) {
            return 1;
        }
        else if (norm(s1[i]) < norm(s2[i])) {
            return -1;
        }
    }
    
    return 0;
}
    
int main() {
    std::string s1, s2;
    
    std::cin >> s1 >> s2;
    std::cout << cmp(s1, s2);
    
    return 0;
}