#include <iostream>
#include <vector>
#include <numeric>


int square_sum(const std::vector<int>& numbers)
{
    int sum{0};

    for (auto i : numbers)
    {
        sum += i * i;
    }

    return sum;
}

int main()
{

    std::vector<int> v{1,2,3};

    std::cout << square_sum(v) << std::endl;

    std::cout << std::accumulate(v.begin(), v.end(), 0) << std::endl;

}