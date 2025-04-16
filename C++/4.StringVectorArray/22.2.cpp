#include <iostream>
#include <string>  // string 是 C++ 的字符串类，提供了更多的功能和安全性

void PrintString(const std::string& string) //引用，而不会拷贝,并保证不修改
{
    std::cout << string << std::endl;  // 输出字符串
}
int main()
{
    std::string name = "Cherno";//+"hello!" 语法错误
    name += "hello";   // Chernohello
    //或者
    //std::string name = std::string("Cherno") + "hello!";
    PrintString(name);  // 输出字符串
    std::cout << name.size() << std::endl;   // 6，字符大小

    bool contains = name.find("no") != std:string::npos;  // 查找字符串中是否包含子串，返回值是 size_t 类型，npos 是一个常量，表示没有找到
    std::cout << contains << std::endl;  // 1，表示包含

    char* s;//试试string和char*的区别
    strlen(s);  // 计算字符串长度，返回值是 size_t 类型
    strcpy(s, name.c_str());  // 将 C++ 字符串复制到 C 字符串中，c_str() 返回一个指向字符串数据的指针

}