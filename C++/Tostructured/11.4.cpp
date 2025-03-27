#include<iostream>
#define Log(x) std::cout << x << std::endl

int main()
{
    int a = 5;
    int b = 8;
    int* ptr = &a;
    *ptr = 10;
    ptr = &b;
    *ptr = 12;
    Log(a); 
    Log(b);
    std::cin.get();
}