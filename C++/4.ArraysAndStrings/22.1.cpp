#include <iostream>

int main()
{
    const char* name = "Cherno";  // 常量无法更改
    // name[2] = 'a';  // 无法实现，如果你知道不会去修改字符串就加上const，否则就去掉
    char name2[6] = { 'C','h','e','r','n','o' };
    std::cout << name2 << std::endl;  //output: Cherno烫烫烫烫烫......*(maybe)
//分配了array guard，但是没有空终止符，所以 cout 不知道打印到哪里结束
//笨办法：
    // std::cout << name2[0] << name2[1] << name2[2] << name2[3] << name2[4] << std::endl;  // Cherno
//智能办法：
    char name3[] = "Cherno";  // 自动添加空终止符
    std::cout << name3 << std::endl;  // Cherno
// 但是如果你要手动添加空终止符，注意要加上'\0'，否则会报错
// 也可以用0来代替'\0'，但是不推荐，因为'\0'更直观
    char name4[] = { 'C','h','e','r','n','o', '\0' };  // 手动添加空终止符
//char name4[] = { 'C','h','e','r','n','o', 0 };  // 0也可以
    std::cout << name4 << std::endl;  // Cherno
    std::cin.get();
}