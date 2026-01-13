#include <iostream>
#include <string>

int main()


{

    const int MAX_AGE = 90; // 常量，不能被修改
 
   const int* a = new int;
    // 等同于int const* a = new int;
    *a = 2;     
    a = (int*)&MAX_AGE;// 强制类型转换
    std::cout << *a << std::endl;
    std::cin.get();
    // 输出 90
}