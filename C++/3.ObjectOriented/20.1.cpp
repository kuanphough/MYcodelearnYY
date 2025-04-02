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

int main()
{
    Entity* e = new Entity();
    std::cout << e->GetName()<< std::endl;

    Player* p = new Player("Cherno");
    std::cout << p->GetName() << std::endl;

    Entity* entity = p;
    std::cout << entity->GetName() << std::endl;

    std::cin.get();
}