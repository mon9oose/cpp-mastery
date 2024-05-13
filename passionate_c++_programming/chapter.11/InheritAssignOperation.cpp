#include <iostream>

class A
{
private:
    int num1, num2;

public:
    A(int n1 = 0, int n2 = 0) : num1(n1), num2(n2)
    {
        std::cout << "called A constructor" << std::endl;
    }
    void ShowData() { std::cout << num1 << ", " << num2 << std::endl; }
    A &operator=(const A &a)
    {
        std::cout << "called A '=' operator" << std::endl;
        num1 = a.num1;
        num2 = a.num2;
        return *this;
    }
};

class B : public A
{
private:
    int num3, num4;

public:
    B(int n1 = 0, int n2 = 0, int n3 = 0, int n4 = 0) : A(n1, n2), num3(n3), num4(n4) {}
    void ShowData()
    {
        A::ShowData();
        std::cout << num3 << ", " << num4 << std::endl;
    }
    B &operator=(const B &b)
    {
        std::cout << "called b '=' operator" << std::endl;
        A::operator=(b);
        num3 = b.num3;
        num4 = b.num4;
        return *this;
    }
};

int main(void)
{
    B b1(111, 222, 333, 444);
    B b2(0, 0, 0, 0);

    b2 = b1; // b2.operator=(b1);
    b2.ShowData();

    return 0;
}