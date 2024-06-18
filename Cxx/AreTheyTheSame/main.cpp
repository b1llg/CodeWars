#include <iostream>
#include <vector>
#include <algorithm>



class Same {
public :

    static bool comp(std::vector<int>&a, std::vector<int>&b)
    {
        if (a.size() == 0 || b.size() == 0)
        {
            return false;
        }

        std::vector<int> asquared;

        for (int item : a)
        {
            asquared.push_back( item * item);
        }

        for (int item : b)
        {
            if (std::find(asquared.begin(), asquared.end(), item) == asquared.end())
            { 
                return false;
            }
        }

        return true;
    }
};


int main()
{


    Same s1;

    std::vector<int> a = {121, 144, 19, 161, 19, 144, 19, 11};
    std::vector<int> b = {14641, 20736, 361, 25921, 361, 20736, 361, 121};

    std::cout << std::boolalpha << s1.comp(a,b) << std::endl;

    a = {121, 144, 19, 161, 19, 144, 19, 11};
    b = {14641, 20736, 361, 25921, 361, 20736, 362, 121};

    std::cout << std::boolalpha << s1.comp(a,b) << std::endl;
}