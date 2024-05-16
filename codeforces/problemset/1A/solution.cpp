#include <iostream>

int ceil(int x, int y)
{
    int res = x / y;

    if(res * y < x)
    {
        res += 1;
    }

    return res;
}

int main(int argc, char *argv[])
{
    int n = 0, m = 0, a = 0;
    long long sum = 0;
    std::cin >> n >> m >> a;

    sum = (long long)ceil(n, a) * (long long)ceil(m, a);

    std::cout << sum << '\n';

    return 0;
}
