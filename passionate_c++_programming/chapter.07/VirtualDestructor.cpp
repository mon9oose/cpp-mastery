#include <cstring>
#include <iostream>

class First
{
private:
    char *strOne;

public:
    First(char *str)
    {
        strOne = new char[strlen(str) + 1];
        strcpy(strOne, str);
    }
    virtual ~First()
    {
        delete strOne;
        std::cout << "destruct first class" << std::endl;
    }
};

class Second : public First
{
private:
    char *strTwo;

public:
    Second(char *str1, char *str2) : First(str1)
    {
        strTwo = new char[strlen(str2) + 1];
        strcpy(strTwo, str2);
    }
    ~Second()
    {
        delete strTwo;
        std::cout << "destruct second class" << std::endl;
    }
};

int main(void)
{
    First *f1 = new Second("simple", "complex");
    delete f1;
    std::cout << "delete f1" << std::endl;
    return 0;
}