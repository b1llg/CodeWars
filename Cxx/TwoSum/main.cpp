#include <iostream>
#include <vector>


std::pair<size_t, size_t> two_sum(const std::vector<int>& numbers, int target) {



   for (size_t i = 0; i < numbers.size(); i++)
   {
       for (size_t j = i+1; j < numbers.size(); j++)
       {
           if (numbers[i] + numbers[j] == target)
           {
               return { i,j };
           }
       }
   }

   return { 0, 0 };
}

int main()
{

   std::pair<size_t, size_t> pair;

   pair =  two_sum({ 1,2,3 }, 4);

   return 0;
}