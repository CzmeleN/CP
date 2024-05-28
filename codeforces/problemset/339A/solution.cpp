#include <iostream>
#include <vector>
#include <algorithm>
    
int main() {
    std::string inp;
    
    std::cin >> inp;
    std::vector<char> out;
    
    for (short i = 0; i < inp.length(); i++) {
        if (inp[i] != '+') {
            out.push_back(inp[i]);
        }
    }
    
    std::sort(out.begin(), out.end());
    
    for (short i = 0; i < out.size() - 1; i++) {
        std::cout << out[i] << '+';
    }
    
    std::cout << out.back();
    
    return 0;
}