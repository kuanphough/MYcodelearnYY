#include <iostream>

struct Entity
{
    int x, y;

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

    Entity e1 = {2, 8};

    e.Print();
    e1.Print();
    std::cin.get();
}