#include<iostream>
#define Log(x) std::cout << x << std::endl

void Increment(int& value)
{
    value++;
}

int main()
{
    int a = 5;
    Increment(a);
    // Increment(a) is the same as Increment(ref) in 11.1.cpp
    Log(a); //outputs 6
    std::cin.get();
}