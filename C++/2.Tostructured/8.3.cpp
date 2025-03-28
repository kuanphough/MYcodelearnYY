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
    Log("==============================");
    int i = 0;
    while (i < 5)
    {
        Log("Hello World");
        i++ ;
    }

    do
    {
        /* code */
    } while (i < 5);
    
    std::cin.get();
}