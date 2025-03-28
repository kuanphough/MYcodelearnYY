#include <iostream>
#include "EndBrace.h"
#include "log.h"
#include "log.cpp"

int main()
{
    int i = 0;
    bool condition = true;
    for(; condition; )
    {
        Log("Hello World");
        i++
        if(!(i < 5))
        {
            condition = false;
        }
    }
    std::cin.get();
}
