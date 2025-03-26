#include <iostream>
int Multiply(int a, int b)
{
	return a * b;
}

void MultipluAndLog(int a, int b)
{
	int result = Multiply(a, b);
	std::cout << result << std::endl;
	std::cin.get();
}
int main()
{
	MultipluAndLog(3, 2);
	MultipluAndLog(5, 8);
	MultipluAndLog(9, 15);
}