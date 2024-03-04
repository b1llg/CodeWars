#include <vector>
#include <iostream>

template<typename T>
std::vector<std::vector<T>> matrix_multiplication(std::vector<std::vector<T>>& a, std::vector<std::vector<T>>& b, T n)
{
	std::vector<std::vector<T>> c(n);

	for (T i = 0; i < n; i++)
	{
		c[i] = std::vector<T>(n);
	}

	for (T i = 0; i < n; i++)
	{

		for (T j = 0; j < n; j++)
		{
			T sum{ 0 };
			for (T k = 0; k < n; k++)
			{
				sum += a[i][k] * b[k][j];
			}
			c[i][j] = sum;
		}
	}

	return c;
}

void displayMat(std::vector<std::vector<int>> mat)
{
	for (auto r : mat)
	{
		for (auto c : r)
		{
			std::cout << c << " ";
		}
		std::cout << "\n";
	}
	std::cout << "\n\n";
}

int main()
{
	typedef std::vector<std::vector<int>> mati;
	mati a{ {1,2}, {3,2} };
	mati b{ {3,2}, {1,1} };
	mati c = matrix_multiplication(a, b, 2);

	displayMat(a);
	displayMat(b);
	displayMat(c);


	std::cout << "test" << std::endl;
	return 0;
}