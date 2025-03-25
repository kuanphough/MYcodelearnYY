#include "max.h"

int findMaxNum(int num1, int num2)
{
    return num1 > num2 ? num1 : num2;
}

int main()
{
    int a = 10;
    int b = 20;
    int c = findMaxNum(a, b);
    printf("%d\n", c);
    return 0;
}