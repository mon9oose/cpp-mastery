#include <iostream>

class First
{
private:
    int num1, num2;

public:
    First(int n1 = 0, int n2 = 0) : num1(n1), num2(n2) {}
    void ShowData() { std::cout << num1 << ", " << num2 << std::endl; }
};

class Second
{
private:
    int num3, num4;

public:
    Second(int n3 = 0, int n4 = 0) : num3(n3), num4(n4) {}
    void ShowData() { std::cout << num3 << ", " << num4 << std::endl; }

    Second &operator=(Second &s)
    {
        std::cout << "Second &operator=(Second &s) called" << std::endl;
        num3 = s.num3;
        num4 = s.num4;
        return *this;
    }
};

int main(void)
{
    First f1(111, 222);
    First fcpy;
    Second s1(333, 444);
    Second scpy;

    fcpy = f1;
    scpy = s1;

    fcpy.ShowData();
    scpy.ShowData();

    First fobj1, fobj2;
    Second sobj1, sobj2;

    fobj1 = fobj2 = fcpy;
    sobj1 = sobj2 = scpy;

    fobj1.ShowData();
    fobj2.ShowData();
    sobj1.ShowData();
    sobj2.ShowData();

    return 0;
}