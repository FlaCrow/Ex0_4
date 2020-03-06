#include <iostream>

int divi(int n, int a, int b)
{
	int m;
	m = n / a + n / b;
	return m;
}


int main()
{
	int n = 1000, a = 3, b = 10;
	std::cout << divi(n, a, b);
}
