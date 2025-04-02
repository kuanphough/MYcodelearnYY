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

    void Print()
    {
        std::cout << X << ","<< Y << std::endl;
    }
};

class Log 
{
    private:
    Log(){}//构造函数私有化，禁止创建实例
    public:
    static void Write()
    {
        std::cout << "Log Created" << std::endl;
    }
};
int main()
{
    Log::Write();//只用我的class
//    Log 1;//这里会报错
    Entity e(5.0f, 10.0f);
    e.Print();

    std::cin.get();
}