#include <iostream>
#include <cmath>
#include <algorithm>
#include <cstdio>
#include <vector>

int main()
{

    std::cout<<"Enter a Number\n";

    int n;
    std::cin >> n;
    if (n == 1)
    {
        std::cout << "one";
    }
    else if (n == 2)
    {
        std::cout << "two";
    }
    else if (n == 3)
    {
        std::cout << "Three";
    }
    else if (n == 4)
    {
        std::cout << "Four";
    }
    else if (n == 5)
    {
        std::cout << "Five";
    }
    else if (n == 6)
    {
        std::cout<<"six";
    }
    else if (n == 7)
    {
        std::cout<<"seven";
    }
    else if (n == 8)
    {
        std::cout<<"eight";
    }
    else if (n == 9)
    {
        std::cout<<"nine";
    }
    else if (n == 10)
    {
        std::cout<<"Ten";
    }
    else if (n >9)
    {
        std::cout<<"Greater than 9";
    }
return 0;
}