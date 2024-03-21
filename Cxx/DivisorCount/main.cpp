#include <iostream>
#include <math.h>
#include <algorithm>

int divisors(int n){  
    int count{0};

    for (int i=1; i<=n; i++)
    {
        if (n % i == 0)
        {
            count++;
        }
    }

    return count;
}

int main()
{
    std::cout << divisors(30) << std::endl;
}