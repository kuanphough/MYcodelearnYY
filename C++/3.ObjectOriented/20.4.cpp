#include <iostream>
#include  <string>

class Entity
{
public:
    virtual std::string GetName() = 0;//纯虚函数，表示这个函数在基类中没有实现，必须在派生类中实现
};

class Player : public  Entity
{
private:
    std::string m_Name; //存储玩家名字
public:
    Player(const std::string& name)   //构造函数
        : m_Name(name) {}

    std::string GetName() override { return m_Name; }
};

void PrintName(Entity* entity)
{
    std::cout << entity->GetName() << std::endl;
}

int main()
{
    Entity* e = new Player("");
    PrintName(e);                             //Entity
    Player* p = new Player("Cherno");
    PrintName(p);                             //Cherno

    std::cin.get();
}
