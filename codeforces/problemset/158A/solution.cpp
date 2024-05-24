#include <iostream>

int main() {
    short n, k, a, res = 0, needed;
    std::cin >> n >> k;
    k--;

    for(short i = 0; i < n; i++) {
        std::cin >> a;

        if (i < k) {
            if (a > 0) {
                res++;
            }
        }
        else if (i == k) {
            if (a > 0) {
                res++;
                needed = a;
            }
            else {
                needed = 101;
            }
        }
        else if(a >= needed) {
            res++;
        }
    }
    
    std::cout << res;

    return 0;
}