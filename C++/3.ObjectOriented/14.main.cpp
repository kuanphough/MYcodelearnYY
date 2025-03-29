#include <iostream>

int  s_Variable = 10;
// 2.如果加上extern，即和外部用同一个变量，外部链接。
// extern int  s_Variable;

void Function()
{

}

int main()
{
    std::cout << s_Variable << std::endl;
    std::cin.get();
}