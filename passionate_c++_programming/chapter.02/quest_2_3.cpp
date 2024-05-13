#include <iostream>

typedef struct __Point
{
    int xpos;
    int ypos;
} Point;

Point& PntAddr(const Point &p1, const Point &p2)
{
    Point *p = new Point();
    p->xpos = p1.xpos + p2.xpos;
    p->ypos = p1.ypos + p2.ypos;
    return *p;
}

int main(void)
{
    Point* p1 = new Point();
    p1->xpos = 1;
    p1->ypos = 1;

    Point* p2 = new Point();
    p2->xpos = 2;
    p2->ypos = 2;

    Point& p3 = PntAddr(*p1, *p2);
    std::cout << "sum x : " << p3.xpos << ", sum y : " << p3.ypos << std::endl;

    delete p1;
    delete p2;
    delete &p3;

    return 0;
}