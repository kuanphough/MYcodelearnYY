#include <iostream>
#include <string>
#include <stdlib.h>

int main()
{
char* name[8] = "Cherno"; 
name[2] = 'a';
std::cout << name << std::endl;
std::cin.get();
// prints "Cherno"
// 在 Release 模式下运行修改字符串，也不会发生改变。而 Debug 模式下会得到一个异常。
}