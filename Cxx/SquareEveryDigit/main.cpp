#include <iostream>
#include <sstream>
#include <string>
#include <stack>

int square_digits(int num) {

	std::stack<int> stk;
	std::stringstream ss;
	int mod, res{ 0 };

	// Moudlo up the the last number
	while (num > 0) 
	{
		mod = num % 10;

		stk.push(mod * mod);

		num /= 10;
	}

	while (!stk.empty())
	{
		ss << std::to_string(stk.top());
		stk.pop();
	}

	ss >> res;

	return res ;
}

int main()
{
	int num{ 765 };

	std::cout << square_digits(num);

	return 0;
}