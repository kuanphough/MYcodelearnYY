#include <iostream>
#include "EndBrace.h"
#include "log.h"
#include "log.cpp"

int main()
{
    for(int i = 0; i < 5; i++)
    {
         if((i+1)%2 == 0)
          return 0;
        Log("Hello World");
        std::cout << i << std::endl;
        }
        std::cin.get();//这行无用

    }