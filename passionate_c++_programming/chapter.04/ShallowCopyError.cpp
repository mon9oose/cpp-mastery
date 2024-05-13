#include <iostream>
#include <cstring>
#include <cstdio>

class Person
{
private:
    char *name;
    int age;

public:
    Person(char *name, int age)
    {
        auto len = strlen(name) + 1;
        this->name = new char(len);
        strcpy(this->name, name);
        this->age = age;
    }
    ~Person()
    {
        delete []name;
        std::cout << "called destructor" << std::endl;
    }
    void ShowPersonInfo() const
    {
        std::cout << "이름 : " << this->name << std::endl;
        std::cout << "나이 : " << this->age << std::endl;
    }
    void ShowNameAddr() const
    {
        printf("name addr : %p\n", name);
    }
};

int main(void)
{
    Person man1("park", 20);
    Person man2 = man1;
    man1.ShowPersonInfo();
    man2.ShowPersonInfo();

    man1.ShowNameAddr();
    man2.ShowNameAddr();

    return 0;
}