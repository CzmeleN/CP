#include <bits/stdc++.h>

int main() {
  short n, x;
  short ids[2], counts[2] = {0, 0};

  std::cin >> n;

  for (short i = 1; i <= n; i++) {
    std::cin >> x;
    ids[x % 2] = i;
    counts[x % 2]++;
  }

  std::cout << (counts[0] > counts[1] ? ids[1] : ids[0]) << std::endl;

  return 0;
}
