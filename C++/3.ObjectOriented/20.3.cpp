#include <iostream>
#include  <string>

class Entity
{
public:
    virtual std::string GetName() { return "Entity"; }//
};

class Player : public  Entity
{
private:
    std::string m_Name; //存储玩家名字
public:
    Player(const std::string& name)   //构造函数
        : m_Name(name) {}

    std::string GetName() override { return m_Name; }
    // std::string GetName() { return m_Name; } 加上override关键字，表示重写基类的虚函数，更有可读性
};

void PrintName(Entity* entity)
{
    std::cout << entity->GetName() << std::endl;
}

int main()
{
    Entity* e = new Entity();
    PrintName(e);                             //Entity
    Player* p = new Player("Cherno");
    PrintName(p);                             //Cherno

    std::cin.get();
}
