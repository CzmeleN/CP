#include <iostream>

int main(int argc, char *argv[])
{
    unsigned short weight = 0;
    std::cin >> weight;
    std::cout << (weight % 2 || weight <= 2 ? "NO" : "YES"); 
    return 0;
}
