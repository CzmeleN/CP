#include <bits/stdc++.h>
#include <ios>
#include <map>

int main() {
    std::ios_base::sync_with_stdio(0);
    std::cin.tie(0);
    std::cout.tie(0);

    int n;
    std::string s;
    std::map<std::string, int> dict;

    std::cin >> n;

    while (n--) {
        std::cin >> s;

        if (dict[s]) {
            std::cout << s << dict[s];
        }
        else {
            std::cout << "OK";
        }

        dict[s]++;
        std::cout << std::endl;
    }

    return 0;
}
