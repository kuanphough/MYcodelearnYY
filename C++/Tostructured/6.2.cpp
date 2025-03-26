#include <iostream>
int Multiply(int a, int b)
{
	return a * b;
}
int main()
{
	int result1 = Multiply(3, 2);
	std::cout << result1 << std::endl;
	std::cin.get();

	int result2 = Multiply(5, 8);
	std::cout << result2 << std::endl;
	std::cin.get();

	int result3 = Multiply(9, 15);
	std::cout << result3 << std::endl;
	std::cin.get();
}