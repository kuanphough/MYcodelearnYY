#include <iostream>

class Entity
{
    public:
    float X, Y;

    Entity()
    {
        X = 0.0f;
        Y = 0.0f;
        std::cout << "Constructed Entity" << std::endl;
    }

    ~Entity()//析构函数
    {
        std::cout << "Entity Destroyed" << std::endl; 
    }
    void Print()
    {
        std::cout << X << ","<< Y << std::endl;
    }
};

void Function()
    {
        Entity e;
        e.Print();
    }

int main()
{
    Function();//函数调用，局部变量e在函数结束后会被销毁
    std::cin.get();
}

// 运行结果：
// Constructed Entity
// 0,0
// Entity Destroyed
// 说明：局部变量在函数结束后会被销毁，调用析构函数

