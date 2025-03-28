#include<iostream>
#define Log(x) std::cout << x << std::endl

int main()
{
    void* ptr = 0;//空指针，但本质不能赋予0
    void* ptr2 = NULL;//正常空指针
    void* ptr3 = nullptr;//cpp关键词
    std::cin.get();
}