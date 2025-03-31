#include <iostream>

class Entity
{
    public:
    float X, Y;

    Entity()
    {

    }

    Entity(float x, float y)
    {
        X = x;
        Y = y;
    }
    {

    }
    void Print()
    {
        std::cout << X << ","<< Y << std::endl;
    }
}

int main()
{
    Entity e(5.0f, 10.0f);
    e.Print();

    std::cin.get();
}