#include <iostream>

class Point
{
private:
    int xpos, ypos;

public:
    Point(int x = 0, int y = 0) : xpos(x), ypos(y) {}
    void ShowPosition()
    {
        std::cout << "x : " << xpos << ", ypos : " << ypos << std::endl;
    }
    Point operator+(const Point &ref)
    {
        return Point(xpos + ref.xpos, ypos + ref.ypos);
    }
};

int main(void)
{
    Point p1(3, 4);
    Point p2(10, 20);
    Point p3 = p1.operator+(p2);
    Point p4 = p1 + p2;

    p1.ShowPosition();
    p2.ShowPosition();
    p3.ShowPosition();
    p4.ShowPosition();

    return 0;
}