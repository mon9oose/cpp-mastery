#include <iostream>

class Person
{
public:
    void Sleep() { std::cout << "Sleep" << std::endl; }
};

class Student : public Person
{
public:
    void Study() { std::cout << "Study" << std::endl; }
};

class PartTimeStudent : public Student
{
public:
    void Work() { std::cout << "Work" << std::endl; }
};

int main(void)
{
    Person *p1 = new Student();
    Person *p2 = new PartTimeStudent();
    Student *s1 = new PartTimeStudent();

    p1->Sleep();
    p2->Sleep();
    s1->Study();

    return 0;
}