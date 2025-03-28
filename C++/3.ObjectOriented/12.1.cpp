#include<iostream>
#define Log(x) std::cout << x << std::endl


class Player
{
public:
    int x, y;
    int speed;
};

void Move(Player& player, int xa, int ya)
{
    player.x += xa * player.speed;
    player.y += ya * player.speed;
}
int main()
{
   Player player;
    Move(player, 1, -1);

    std::cin.get();
}