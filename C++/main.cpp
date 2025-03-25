#include <iostream>
#include "EndBrace.h"

int main()
{
	int x = 6;
	bool comparisonResult = x == 5;
	if (comparisonResult)
	{
		Log("hello world");
	}
	
	std::cin.get();
}

void Log(const char* message)
{
	std::cout << message << std::endl;
}