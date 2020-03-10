#include <iostream>

int divi(int n, int a, int b)
{
	int m;
	if(a<0) a=-a;
	if(b<0) b=-b;	
	m = n / a + n / b - n / (a * b);
	return m;
}


int main()
{
	int n = 1000, a = 3, b = 10;
	std::cout << divi(n, a, b);
}
