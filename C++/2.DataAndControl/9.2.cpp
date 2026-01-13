#include <iostream>
#include "EndBrace.h"
#include "log.h"
#include "log.cpp"

int main()
{
    for(int i = 0; i < 5; i++)
    {
        if(i%2 == 0)
        break;
        Log("Hello World");
        std::cout << i << std::endl;
        }
        std::cin.get();
}