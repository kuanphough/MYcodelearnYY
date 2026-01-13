#include <iostream>
#include <string>

class Entity
{
private:
    int m_X, m_Y;
    mutable int var; // mutable 可以修改
public:
    int GetX() const // 承诺了这个方法不会改变类，是一个只读方法
    {
    //    m_X = 2;       // 无法修改
        var = 2; // 可以修改
        return m_X;
    }
    void SetX(int x) // 可以修改类，不会是const
    {
        m_X = x;
    }
};
void PrintEntity(const Entity& e)
{
    std::cout << e.GetX() << std::endl;
}
int main()
{
    Entity 
    const int MAX_AGE = 90; 
   const int* a = new int;
    *a = 2;     
    a = (int*)&MAX_AGE;
    std::cout << *a << std::endl;
    std::cin.get();

}