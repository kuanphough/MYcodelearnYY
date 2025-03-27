#include<iostream>
#define Log(x) std::cout << x << std::endl

int main()
{
    char* buffer = new char[8];//分配8字节内存
    memset(buffer, 0, 8);//给buffer赋予一个8字节的0
    char** ptr = &buffer;//指针指向buffer,询问buffer的内存位置并保存

    delete[] buffer;//释放内存
    std::cin.get();
}