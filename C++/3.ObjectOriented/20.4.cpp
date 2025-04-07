#include <iostream>
#include  <string>

class Printable
{
public:
    virtual std::string GetClassName() = 0; //纯虚函数，表示这个函数在基类中没有实现，必须在派生类中实现
};

class Entity : public Printable //继承Printable类
{
public:
    virtual std::string GetName() { return "Entity";}
    std::string GetClassName() override { return "Entity"; }
};

class Player : public  Entity
{
private:
    std::string m_Name; //存储玩家名字
public:
    Player(const std::string& name)   //构造函数
        : m_Name(name) {}

    std::string GetName() override { return m_Name; }
    std::string GetClassName() override { return "Player"; } //没有这行将输出两个entity
};

void PrintName(Entity* entity)
{
    std::cout << entity->GetName() << std::endl;
}

void Print(Printable* obj)
{
    std::cout << obj->GetClassName() << std::endl;
}
int main()
{
    Entity* e = new Player("");
    //PrintName(e);                             //Entity
    Player* p = new Player("Cherno");
    //PrintName(p);                             //Cherno

    Print(e);                             //Entity
    Print(p);                             //Player
    std::cin.get();
}
