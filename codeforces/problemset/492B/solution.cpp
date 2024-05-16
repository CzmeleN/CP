#include <algorithm>
#include <iomanip>
#include <iostream>
#include <vector>

int main(int argc, char *argv[])
{
    int n = 0, l = 0, curr = 0, max = 0;
    float res;

    std::cin >> n >> l;
    std::vector<int> lanterns(n);

    for(int i = 0; i < n; i++)
    {
        std::cin >> curr;
        lanterns.at(i) = curr;
    }
    
    std::sort(lanterns.begin(), lanterns.end());
    max = lanterns.front() * 2;

    for(int i = 0; i < n - 1; i++)
    {
        curr = lanterns.at(i + 1) - lanterns.at(i);
        max = curr > max ? curr : max;
    }

    curr = (l - lanterns.back()) * 2;
    max = curr > max ? curr : max;
    res = (float)max / 2.0f;
    std::cout << std::fixed << std::setprecision(10) << res << '\n';

    return 0;
}