#include <iostream>
#include <string>

class RomanHelper 
{
public:
	std::string to_roman(unsigned int n) {

		int n_m, n_d, n_c, n_l, n_x, n_v, n_i;
		n_m = n_d = n_c = n_l = n_x = n_v = n_i = 0;

		n_m = n/1000;
		n -= n_m * 1000;

		n_d = n / 500;
		n -= n_d * 500;

		n_c = n / 100;
		n -= n_c * 100;

		n_l = n / 50;
		n -= n_l * 50;

		n_x = n / 10;
		n -= n_x * 10;
		
		n_v = n / 5;
		n_i = n -= n_v*5;

		std::cout <<
			"M: " << n_m << "\n" <<
			"D: " << n_d << "\n" <<
			"C: " << n_c << "\n" <<
			"L: " << n_l << "\n" <<
			"X: " << n_x << "\n" <<
			"V: " << n_v << "\n" <<
			"I: " << n_i << "\n" << std::endl;

		return "";
	}
	int from_roman(std::string rn) {
		return 0;
	}
};


int main()
{
	RomanHelper rm;

	rm.to_roman(1999);


	return 0;
}