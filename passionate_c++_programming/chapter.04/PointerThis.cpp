#include <cstring>
#include <iostream>

class SoSimple
{
private:
    int num;

public:
    SoSimple(int n) : num(n)
    {
        std::cout << "num : " << num << std::endl;
        std::cout << "address : " << this << std::endl;
    }
    void ShowSimpleData()
    {
        std::cout << num << std::endl;
    }
    SoSimple *GetThisPointer()
    {
        return this;
    }
};

int main(void)
{
    SoSimple s(100);
    auto p = s.GetThisPointer();
    std::cout << p << std::endl;
    p->ShowSimpleData();
    (*p).ShowSimpleData();

    return 0;
}