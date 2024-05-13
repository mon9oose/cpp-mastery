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
    friend Point operator+(const Point &pos1, const Point &pos2);
};

Point operator+(const Point &pos1, const Point &pos2)
{
    return Point(pos1.xpos + pos2.xpos, pos1.ypos + pos2.ypos);
}

int main(void)
{
    Point p1(3, 4);
    Point p2(10, 20);
    auto p3 = p1 + p2;

    p1.ShowPosition();
    p2.ShowPosition();
    p3.ShowPosition();

    return 0;
}