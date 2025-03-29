#include <iostream>

struct Entity
{
    static int x, y;

    void Print()
    {
        std::cout << x << ", " << y << std::endl;
    }
};

int main()
{
    Entity e;
    e.x = 5;
    e.y = 10;

    Entity e1;
    e1.x = 2;
    e1.y = 8;
    // Entity e1 = {2, 8}; // x和y是静态成员变量，而不是class menbers，不能直接初始化。
    //这样会显示无法识别的外部变量。

    e.Print();
    e1.Print();
    std::cin.get();
}