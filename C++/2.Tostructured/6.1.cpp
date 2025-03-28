#include <iostream>
int Multiply(int a, int b)
{
	return a * b;
}
int main()
{
	int result = Multiply(3, 2);
	std::cout << result << std::endl;
	std::cin.get();
}