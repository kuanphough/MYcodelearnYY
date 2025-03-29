// static：类与结构之外者，具有内部含义，只对定义它的翻译单元可见。
//类与结构之内者，与该类的所有实例共享内存，和类绑定！
#include <iostream>


static int  s_Variable = 5; 
// 1.如果删掉static，会出现LNK错误。

// 3.如果加上static，main.cpp里的extern int s_Variable会找不到变量。

static void Function()
{
    std::cout << s_Variable << std::endl;
    std::cin.get();
}
//4.如果加上static，Function()函数只能在本文件中使用，