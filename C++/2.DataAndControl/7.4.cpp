#include "log.cpp"
#include <iostream>

int main()
{
	const char* ptr = "Hello";
	if (ptr)
		Log(ptr);
	else if(ptr == "Hello")
		Log("ptr is Hello!");
	else
		Log("Ptr is null!");
	std::cin.get();
}
// Compare this snippet from C%2B%2B/Tostructured/EndBrace.h:
// #pragma once

