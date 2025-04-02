#include <iostream>
#include  <string>

class Entity
{
public:
    std::string GetName() { return "Entity"; }//返回字符串
};

class Player : public  Entity
{
private:
    std::string m_Name; //存储玩家名字
public:
    Player(const std::string& name)   //构造函数
        : m_Name(name) {}

    std::string GetName() { return m_Name; }
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
    PrintName(p);                             //Entity

    std::cin.get();
}

// Output: will be "Entity" twice, because the GetName() method in Entity is not virtual.
// To fix this, we need to make the GetName() method virtual in the Entity class.  
// This allows the derived class Player to override the method and return its own name.
