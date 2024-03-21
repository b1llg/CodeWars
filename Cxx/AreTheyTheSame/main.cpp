#include <vector>
#include <algorithm>
#include <iostream>
#include <math.h>

class Same {
public :
    static bool comp(std::vector<int>&a, std::vector<int>&b) {
        
        std::vector<int> nums;

        for (int val : b)
        {
            if (std::find(a.begin(), a.end(), sqrt(val)) == std::end(a))
            {
                return false;
            }
        }

        return true;
    }
};


int main()
{
    std::vector<int> a = {121, 144, 19, 161, 19, 144, 19, 11};
    std::vector<int> b = {14641, 20736, 361, 25921, 361, 20736, 361, 121};

    Same s1;

    std::cout << s1.comp(a,b) << std::endl;

    a = {121, 144, 19, 161, 19, 144, 19, 11};
    b = {132, 20736, 361, 25921, 361, 20736, 362, 121};

    std::cout << s1.comp(a,b) << std::endl;

    return 0;
}