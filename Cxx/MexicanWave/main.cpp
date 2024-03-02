#include <iostream>
#include <string>
#include <vector>

std::vector<std::string> wave(std::string y)
{
	std::vector<std::string> res;
	
	// loop over letters
	for (int i = 0; i < y.length(); i++)
	{
		if (y[i] != ' ') // except white spaces
		{
			res.push_back(y);

			res.back()[i] = (char)std::toupper(res.back()[i]);

		}
	}

	return res;
}

int main()
{
	std::string str{ "hello world" };

	std::vector<std::string> mexican_wave{ wave(str) };

	for (auto s : mexican_wave)
	{
		std::cout << s << "\n\n";
	}

	return 0;
}