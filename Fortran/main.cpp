#include <iostream>
#include <string>
#include <sstream>

std::string arithmeticSequence(int a, int d, int n)
{

    std::string res;
    for (int i=1; i <= n; i++)
    {
        res.push_back(i);
        res.push_back(',');
        res.push_back(' ');
    }

    std::cout << res;

    return res;

}


int main()
{

    arithmeticSequence(1,2,3);

    return 0;
}