#include <iostream>

int main()
{
    short n = 0, x = 0;
    std::string line = "";

    std::cin >> n;

    for(int i = 0; i < n; i++)
    {
        std::cin >> line;
        
        if(line.at(0) == '+' or line.at(2) == '+')
        {
            x++;
        }
        else
        {
            x--;
        }
    }

    std::cout << x;

    return 0;
}