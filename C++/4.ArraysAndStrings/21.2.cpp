#include <iostream>

int main()
{
    int example[5];  //分配了足够内存可以存储五个integer
    int *ptr = example; //指针指向example数组的首地址   
    for( int i=0;i<5;i++)  // i<=4有性能问题，因为你在做和小于和等于比较
    {
        example[i] = 2; //每一个成员都等于2
        std::cout << example[i] << std::endl;
    }
    example[2] = 5;
    *(ptr+2) = 6; //指针加法，指针加2等于example[2],所以example[2] = 6
    // *(int*)((char*)ptr +8) = 6; //指针加法，地址加8，等于指针+2
    std::cin.get();
}