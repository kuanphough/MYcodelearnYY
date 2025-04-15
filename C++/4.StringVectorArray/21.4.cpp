#include <iostream>
#include <array>

class Entity
{
    public:
int example[5]; 
//    int count = sizeof(example) / sinzeof(int); 
//sizeof(a) = 20, sizeof(int) = 4, sizeof(char) = 1
//这是一个用于访问其尺寸的办法，但不能相信它，永远不要再数组内存中访问数组的大小
// 不如这么写：

static const int exampleSize = 5;
int example[size]; //这样就可以了

//又或者：
std::array<int, 5> another; //C++11的array类，类似于vector，但没有动态大小

Entity() 
{

    for ( int i=0;i<another.size();i++) 
        another[i] = 2; 
}
};

int main()
{
   Entity e;
    std::cin.get();
}