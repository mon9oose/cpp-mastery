#include <iostream>

class First
{
public:
    void FirstFunc() { std::cout << "first" << std::endl; }
    virtual void SimpleFunc() { std::cout << "first simple" << std::endl; }
};

class Second : public First
{
public:
    void SecondFunc() { std::cout << "second" << std::endl; }
    virtual void SimpleFunc() { std::cout << "second simple" << std::endl; }
};

class Third : public Second
{
public:
    void ThirdFunc() { std::cout << "third" << std::endl; }
    virtual void SimpleFunc() { std::cout << "third simple" << std::endl; }
};

int main(void)
{
    Third *t = new Third();
    t->FirstFunc();
    t->SecondFunc();
    t->ThirdFunc();
    t->SimpleFunc();

    Second &s = *t;
    s.FirstFunc();
    s.SecondFunc();
    s.SimpleFunc();

    First &f = *t;
    f.FirstFunc();
    f.SimpleFunc();

    return 0;
}