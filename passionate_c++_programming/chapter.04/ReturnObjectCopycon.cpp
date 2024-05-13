#include <iostream>
#include <cstdio>

class SoSimple
{
private:
    int num;

public:
    SoSimple(int n): num(n) {}
    SoSimple(const SoSimple &s): num(s.num)
    {
        std::cout << "called constructor ";
        printf("%p\n", this);
    }
    ~SoSimple()
    {
        std::cout << "called Destructor";
        printf("%p\n", this);
    }

    SoSimple & AddNum(int n)
    {
        this->num += n;
        return *this;
    }
    void ShowData() { std::cout << num << std::endl; }
};

SoSimple SimpleFuncObj(SoSimple obj)
{
    std::cout << "return obj 이전";
    printf("%p\n", &obj);
    return obj;
}

int main(void)
{
    SoSimple s(7);
    SimpleFuncObj(s).AddNum(30).ShowData();
    s.ShowData();

    return 0;
}