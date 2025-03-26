#include <iostream>
#include "EndBrace.h"
#include "log.h"
#include "log.cpp"

int main()
{
    for(int i = 0; i < 5; i++)
    {
        Log("Hello World");
    }
    std::cin.get();
}
