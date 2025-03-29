#include <iostream>

struct Entity
{
    static int x, y;

static void Print()
//    void Print()
    {
        std::cout << x << ", " << y << std::endl;
		//如果将line 5静态变量改为普通变量，则会出现报错，因为它没有类实例
    }
};

static void Print(Entity e)
{
    std::cout << Entity::x << ", " << Entity::y << std::endl;
    //但是如果在外部调用struct，line 5改为普通变量时可以使用，因为给了这个函数实例的引用，实例entity是非静态的。
}
int Entity::x = 0; // 静态成员变量必须在类外初始化
int Entity::y = 0; // 静态成员变量必须在类外初始化

int main()
{
    Entity e;
	Entity::x = 5;
    Entity::y = 10;
    //e.x = 5;
    //e.y = 10;

    Entity e1;
    Entity::x = 2;
    Entity::y = 8;
    //e1.x = 2;
    //e1.y = 8;

Entity Print();
//    e.Print();
//    e1.Print();
    std::cin.get();
}
//实质为不断修改static变量和方程，和实例无关。