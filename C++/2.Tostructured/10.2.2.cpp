#include<iostream>
#define Log(x) std::cout << x << std::endl

int main()
{
    int i = 8;
    int* ptr = &i; //指针指向i,询问i的内存位置并保存
    *ptr= 10; //解引用，输出i的值
    Log(i);
    std::cin.get();
}