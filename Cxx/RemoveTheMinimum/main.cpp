#include <vector>
#include <iostream>

std::vector<unsigned int> removeSmallest(const std::vector<unsigned int>& numbers) {

    std::vector<unsigned int> temp;

    unsigned int index{0}, min{1};

    // loop through numbers

    for (unsigned int i=1; i < numbers.size() ; i++)
    {
        if (numbers[i] < min)
        {
            min = numbers[i];
            index = i;
        }
    }

    for (unsigned int i=0; i< numbers.size(); i++)
    {
        if (i != index)
        {
            temp.push_back(numbers[i]);
        }
    }
}

int main()
{
    std::vector<unsigned int>  a{1,2,3,4,5};
    std::vector<unsigned int> temp;

    temp = removeSmallest(a);

    for (unsigned int i=0; i<temp.size(); i++)
    {
        std::cout << a.at(i) << " ";
    }
    std::cout << "\t";

    return 0;
}