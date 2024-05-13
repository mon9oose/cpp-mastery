#include <iostream>

class AAA
{
private:
    int num;

public:
    AAA(int n = 0) : num(0)
    {
        std::cout << "AAA(int n = 0)" << std::endl;
    }
    AAA(const AAA &a) : num(a.num)
    {
        std::cout << "AAA(const AAA &a) : num(a.num)" << std::endl;
    }
    AAA &operator=(const AAA &a)
    {
        num = a.num;
        std::cout << "AAA &operator=(const AAA &a) { num = a.num }" << std::endl;
        return *this;
    }
};

class BBB
{
private:
    AAA mem;

public:
    BBB(const AAA &a) : mem(a) {}
};

class CCC
{
private:
    AAA mem;

public:
    CCC(const AAA &a)
    {
        // AAA mem;
        // mem = a : mem.operator=(a);
        mem = a;
    }
};

int main(void)
{
    AAA obj1(12);
    std::cout << "**********" << std::endl;
    BBB obj2(obj1);
    std::cout << "**********" << std::endl;
    CCC obj3(obj1);
    std::cout << "**********" << std::endl;

    return 0;
}