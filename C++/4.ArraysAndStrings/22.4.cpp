#include <iostream>
#include <string>
#include <stdlib.h>

int main()
{
const char name[8] = "Cher\0no"; 
std::cout << strlen(name) << std::endl; // prints "3"
//remove \0 
// std::cout << strlen(name) << std::endl; 
// prints "6"
std::cin.get();
}