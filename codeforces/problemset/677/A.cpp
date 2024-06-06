#include <iostream>

int main() {
    int n, h, res = 0, x;  

    std::cin >> n >> h;

    while(n--) {
        std::cin >> x;

        if (x > h) {
            res += 2;
        } 
        else {
            res++;
        }
    }

    std::cout << res;

    return 0;
}
