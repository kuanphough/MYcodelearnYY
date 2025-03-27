#include<iostream>
#define Log(x) std::cout << x << std::endl

int main()
{
    int a = 5;
    int& ref = a;
    ref = 2;
    Log(a); //输出2
    std::cin.get();
}