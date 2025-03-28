#include "log.cpp"
#include <iostream>

int main()
{
	int x = 6;
	bool comparisonResult = x == 5;
	if (comparisonResult == true)
	{
		Log("hello world");
	}
	
	std::cin.get();
}

// 一般不这么写的【简短版】
// if (x == 5) Log("hello world");
/* 最好还是分两行，好调试 */
