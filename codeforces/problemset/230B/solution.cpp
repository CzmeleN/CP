#include <iostream>
#include <cmath>

bool is_prime(long long x)
{
    long long sqrt = std::sqrt(x) + 1;

    for(long long i = 2; i < sqrt; i++)
    {
        if(x % i == 0)
        {
            return false;
        }
    }

    return true;
}

bool is_tprime(long long x)
{
    if(x < 2)
    {
        return false;
    }

    long long sqrt = std::sqrt(x);

    if(sqrt * sqrt == x)
    {
        return is_prime(sqrt);
    }
    return false;
}

int main()
{
    int n;
    long long x;

    std::cin >> n;

    for(int i = 0; i < n; i++)
    {
        std::cin >> x;

        if(is_tprime(x))
        {
            std::cout << "YES" << std::endl;
        }
        else
        {
            std::cout << "NO" << std::endl;
        }
    }

    return 0;
}