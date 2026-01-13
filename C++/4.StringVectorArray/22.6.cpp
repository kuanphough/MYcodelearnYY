#include <iostream>
#include <string>
#include <stdlib.h>

int main()
{
    using namespace std::string_literals;
    std::string name0 = std::string("Cherno") + "hello"s;
    //s 是string_literals的别名
    // 在C++14中，可以使用u8"Cherno"，或者std::u8string("Cherno")
    const char* example = R"(Cherno)";
    // R代表raw string，不进行转义
    const char* name = u8"Cherno"; 
    const wchar_t* name2 = L"Cherno";  // L表明后面的字符串字面量是由宽字符组成的
                                   // 2 bytes

    //C++11引入
    const char16_t* name3 = u"Cherno";   // 16 bits = 2 bytes
    const char32_t* name4 = U"Cherno";   // 32 bits = 4 bytes
}