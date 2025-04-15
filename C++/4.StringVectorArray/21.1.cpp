#include <iostream>

int main()
{
    int example[5];  //分配了足够内存可以存储五个integer
    example[0] = 2;
    example[4] = 4;
//    example[-1] = 5;
// example[5] = 2; //越界访问，可能会导致程序崩溃
    std::cout << example[0] << std::endl;   // 2
    std::cout << example << std::endl;      // 0064FC30(内存地址)，因为它是一个指针

    std::cin.get();
}