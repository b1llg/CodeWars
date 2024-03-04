#include <iostream>
#include <sstream>
#include <string>

class Accumul
{
public:
    static std::string accum(const std::string &s)
    {
        std::string res;

        res += (char)std::toupper(s[0]);


        for (int i=1; i < s.length(); i++)
        {
            res += '-';
            res += (char)std::toupper(s[i]);
            for (int j=0 ; j < i ; j++)
            {
                res += (char)std::tolower(s[i]);
            }

        }

        return res; 
    }
};



int main()
{
    Accumul acm;

    std::string r = acm.accum("cwAt");

    std::cout << r << std::endl;

    return 0;
}