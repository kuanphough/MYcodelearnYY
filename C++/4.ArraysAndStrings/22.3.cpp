#include <iostream>
#include <string>
#include <stdlib.h>

int main()
{
    const char name[8] = "Che\0rno";
std::cout << strlen(name) << std::endl; // prints "Che"，只计算到反斜杠0，因为这个意味着字符串的结束
const char* name = u8"Cherno";
const wchar_t* name2 = L"Cherno";  // L表明后面的字符串字面量是由宽字符组成的
// 2 bytes
//C++11引入
const char16_t* name3 = u"Cherno";   // 16 bits = 2 bytes
const char32_t* name4 = U"Cherno";   // 32 bits = 4 bytes
std::cin.get();
}

