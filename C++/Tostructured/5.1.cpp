#include <iostream>

int main()
{
	int variable = 8;//-2b -> 2b=2147483648
	/*4 bytes=32bit data*/
	std::cout << variable << std::endl;
	int variable = 20;
	std::cout << variable << std::endl;
	std::cin.get();
}

unsigned int //2^32
char cha//1 byte
	cha = 'A'//用于存储字符
	cha = 65 //还是会打出A
short a//2 byte
	a = 'A'//还是会打出65
long //4 byte
long long //8byte

float var = 5.5f//浮点 4 byte
double

bool var = true/false //判断 1/0