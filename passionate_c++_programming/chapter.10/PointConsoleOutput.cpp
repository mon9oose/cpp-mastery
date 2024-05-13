#include <iostream>

class Point
{
private:
    int xpos, ypos;

public:
    Point(int x = 0, int y = 0) : xpos(x), ypos(y) {}
    void ShowPosition()
    {
        std::cout << "xpos : " << xpos << ", "
                  << "ypos : " << ypos << std::endl;
    }
    friend std::ostream &operator<<(std::ostream &s, const Point &p);
};

std::ostream &operator<<(std::ostream &s, const Point &p)
{
    s << "xpos : " << p.xpos << ", "
      << "ypos : " << p.ypos << std::endl;
    return s;
}

int main(void)
{
    Point p1(1, 2);
    std::cout << p1 << std::endl;
    return 0;
}