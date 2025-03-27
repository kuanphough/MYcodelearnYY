#include<iostream>
#define Log(x) std::cout << x << std::endl

void Increment(int* value)
{
    (*value)++;//先解引用，再加1
    //*value++;//这里的*是解引用，先加1，再解引用
}

int main()
{
    int a = 5;
    Increment(&a);//&a的意思是询问a的内存位置并保存
    //这里的&是取地址，意思是将a的内存地址传递给Increment函数
    Log(a); //输出2
    std::cin.get();
}

//和11.2一个作用


