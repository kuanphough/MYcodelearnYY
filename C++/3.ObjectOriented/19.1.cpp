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
    Player player;
    player.Move(5, 10);
    player.x = 5;
    player.y = 10;

    std::cin.get();
}

// Output:
// Player: 0x7ffeedc0b8f0
