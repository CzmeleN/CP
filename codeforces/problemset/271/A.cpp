#include <bits/stdc++.h>

bool distinct(int x) {
    std::vector<bool> occurs(10, false);

    for (short i = 0; i < 4; i++) {
        if (occurs[x % 10]) {
            return false;
        }

        occurs[x % 10] = true;
        x /= 10;
    }
   
    return true;
}

int main() {
    int y;
    
    std::cin >> y;

    do {
        y++;
    }
    while (!distinct(y));

    std::cout << y;

    return 0;
}
