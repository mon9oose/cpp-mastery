#include <iostream>

class Point
{
private:
    int xpos, ypos;

public:
    Point(int x = 0, int y = 0) : xpos(x), ypos(y) {}
    void ShowPointInfo()
    {
        std::cout << xpos << ", " << ypos << std::endl;
    }
    Point &operator++()
    {
        xpos += 1;
        ypos += 1;
        return *this;
    }
    friend Point &operator--(Point &ref);
};

Point &operator--(Point &ref)
{
    ref.xpos -= 1;
    ref.ypos -= 1;
    return ref;
}

int main(void)
{
    Point p1;
    ++p1; // p1.operator++();
    p1.ShowPointInfo();
    --p1; // operator--(p1);
    p1.ShowPointInfo();
    return 0;
}