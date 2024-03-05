#include <iostream>
#include <string>


bool solution(std::string const &str, std::string const &ending) 
{
    std::string rstr{str}, rend{ending};

    std::reverse(rstr.begin(), rstr.end());
    std::reverse(rend.begin(), rend.end());
    
    int it{0};

    while (it != ending.length())
    {
        if (rend[it] != rstr[it])
        {
            return false;
        }
        it++;
    };

    return true;
}

int main()
{

    std::string str{"allo"}, test{"lo"};

    std::cout << solution(str, test) << std::endl;

    return 0;
}