#include <iostream>
    
int main() {
    int n, a_wins = 0, d_wins = 0;
    std::string s;
    
    std::cin >> n >> s;
    
    for (int i = 0; i < n; i++) {
        if (s[i] == 'A') {
            a_wins++;
        }
        else {
            d_wins++;
        }
    }
    
    std::cout << (a_wins > d_wins ? "Anton" : (a_wins < d_wins ? "Danik" : "Friendship"));
    
    return 0;
}