#include <iostream>
#include <set>

int main() {
    short res = 0;
    std::string s;
    std::set<char> occurs;

    std::cin >> s;
    
    for (short i = 0; i < s.length(); i++) {
        if (!occurs.count(s[i])) {
            res++;
            occurs.insert(s[i]);
        }
    }

    std::cout << (res % 2 ? "IGNORE HIM!" : "CHAT WITH HER!");
    
    return 0;
}