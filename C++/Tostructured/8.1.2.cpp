// 8.1.cpp
#include <iostream>
#include "EndBrace.h"
#include "log.h"
#include "log.cpp"

int main()
{
    int i = 0;
    for(; i < 5; )
    {
        Log("Hello World");
        i++
    }
    std::cin.get();
}
