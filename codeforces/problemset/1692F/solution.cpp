#include <iostream>

bool possible(int occurs[]) {
    for (short i = 0; i < 10; i++) {
        if (occurs[i]) {
            for (short j = (occurs[i] > 1 ? i : i + 1); j < 10; j++) {
                if (occurs[j]) {
                    for (short k = (occurs[j] > (i == j ? 2 : 1) ? j : j + 1); k < 10; k++) {
                        if (occurs[k]) {
                            if ((i + j + k) % 10 == 3) {
                                return true;
                            }
                        }
                    }
                } 
            }
        }
    }

    return false;
}

void test() {
    int n = 0, a = 0;
    int occurs[10];
    std::cin >> n;
        
    for (short j = 0; j < 10; j++) {
        occurs[j] = 0;
    }

    for (int j = 0; j < n; j++) {
        std::cin >> a;
        occurs[a % 10]++;
    }

    std::cout << (possible(occurs) ? "YES" : "NO") << std::endl;
}

int main() {
    short t = 0;
    int occurs[10];

    std::cin >> t;

    for (short i = 0; i < t; i++) {
        test();
    }

    return 0;
}