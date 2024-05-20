#include <iostream>
#include <vector>

int main()
{
    int x = 0, max = 0;
    std::string s = "", curr = "";
    std::vector<int> digits;

    std::cin >> x;
    s = std::to_string(x);

    for(char c : s)
    {
        digits.push_back(c - '0');
    }

    for(int i = 0; i < digits.size(); i++)
    {
        max = std::max(max, digits.at(i));
    }

    std::cout << max << std::endl;;

    for(int i = 0; i < max; i++)
    {
        curr = s;

        for(int j = 0; j < digits.size(); j++)
        {
            curr[j] = (digits.at(j) > 0) + '0';
            digits.at(j)--;
        }

        std::cout << std::stoi(curr) << ' ';
    }

    return 0;
}