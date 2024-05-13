#include <iostream>

class AAA
{
private:
    int num;

public:
    AAA(): num(0) {}
    AAA & CreateObject(int n) const
    {
        AAA *ptr = new AAA(n);
        return *ptr;
    }
    void ShowNumber() const {
        std::cout << this->num << std::endl;
    }

private:
    AAA(int n): num(n) {}
};

int main(void)
{
    AAA base;
    base.ShowNumber();

    AAA &obj1 = base.CreateObject(3);
    obj1.ShowNumber();

    delete &obj1;
    return 0;
}