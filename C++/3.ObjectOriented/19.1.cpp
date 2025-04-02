#include <iostream>

class Entity 
{
public:
    float x, y;

    void Move(float xa, float ya) 
    {
        x += xa;
        y += ya;
    }
};

class Player : public Entity 
{
public:
    const char* name;
    void print() 
    {
        std::cout << name << std::endl;
    }
};

int main() 
{
    std::cout << sizeof(Entity) << std::endl;
    // std::cout << sizeof(Player) << std::endl;
    Player player;
    player.Move(5, 10);
    player.x = 5;
    player.y = 10;

    std::cin.get();
}

//sizeof(Entity)
// Output:
// 8

//sizeof(Player)
//Output:
//12