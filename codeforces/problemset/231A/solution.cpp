#include <iostream>

int main(int argc, char *argv[])
{
    unsigned short n = 0, sum = 0, partial = 0, curr = 0;
    std::cin >> n;

    while(n > 0)
    {
        for(int i = 0; i < 3; i++)
        {
            std::cin >> curr;
            partial += curr;
        }

        if(partial > 1)
        {
            sum++;
        }

        partial = 0;
        n--;
    }

    std::cout << sum << '\n';

    return 0;
}
