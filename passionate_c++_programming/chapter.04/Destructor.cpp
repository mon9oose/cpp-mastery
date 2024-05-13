#include <cstring>
#include <iostream>

class Person
{
private:
    char *name;
    int age;

public:
    Person(char *myname, int myage)
    {
        int len = strlen(myname);
        name = new char[len];
        strcpy(name, myname);
        age = myage;
    }
    ~Person()
    {
        delete[] name;
        std::cout << "called destructor !!!" << std::endl;
    }
    void ShowPersonInfo()
    {
        std::cout << "이름 : " << this->name << std::endl;
        std::cout << "나이 : " << this->age << std::endl;
    }
};

int main(void)
{
    Person man1("박용구", 35);
    Person man2("김주미", 33);

    man1.ShowPersonInfo();
    man2.ShowPersonInfo();

    return 0;
}