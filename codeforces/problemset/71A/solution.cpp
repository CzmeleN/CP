#include <iostream>
// #include <string>

int main(int argc, char *argv[])
{
    unsigned short n = 0, len = 0;
    std::string word;
    std::cin >> n;
    for(int i = 0; i < n; i++)
    {
        std::cin >> word;
        len = word.length();

        if(len > 10)
        {
            std::cout << word[0] << (len - 2) << word[len - 1] << '\n';
        }
        else
        {
            std::cout << word << '\n';
        }
    }
    return 0;
}
