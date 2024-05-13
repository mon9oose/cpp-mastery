#include "ArrayTemplate.h"
#include "PointTemplate.h"

int main(void)
{
    BoundCheckArray<Point<int>> list1(3);
    // list1[0].operator=(3, 4) x
    // list1[0].
    list1[0] = Point<int>(3, 4);
    list1[1] = Point<int>(5, 6);
    list1[2] = Point<int>(7, 8);

    for (auto i = 0; i < list1.Size(); ++i)
    {
        list1[i].ShowPosition();
    }

    BoundCheckArray<Point<double>> list2(3);

    for (auto i = 0; i < list2.Size(); ++i)
    {
        list2[i].ShowPosition();
    }

    BoundCheckArray<Point<int> *> list3(3);
    list3[0] = new Point<int>(11, 12);
    list3[1] = new Point<int>(13, 14);
    list3[2] = new Point<int>(15, 16);

    for (auto i = 0; i < list3.Size(); ++i)
    {
        list3[i]->ShowPosition();
    }

    return 0;
}