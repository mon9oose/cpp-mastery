#include <iostream>

class SinivelCap
{
public:
    void Take() const { std::cout << "콧물이 나았다" << std::endl; }
};

class SneezeCap
{
public:
    void Take() const { std::cout << "재채기 나았다" << std::endl; }
};

class SnuffleCap
{
public:
    void Take() const { std::cout << "코가 뚫렸다" << std::endl; }
};

class Contac600
{
private:
    SinivelCap sin;
    SneezeCap sne;
    SnuffleCap snu;

public:
    void Take() const
    {
        sin.Take();
        sne.Take();
        snu.Take();
    }
};

class ColdPatient
{
public:
    void TakeContact600(const Contac600 &c) const { c.Take(); }
};

int main(void)
{
    Contac600 c;
    ColdPatient sufferer;
    sufferer.TakeContact600(c);

    return 0;
}