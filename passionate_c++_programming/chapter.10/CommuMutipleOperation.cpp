#include <cstdio>

class Point
{
private:
    int xpos, ypos;

public:
    Point(int x = 0, int y = 0) : xpos(x), ypos(y) {}
    void ShowPosition() { printf("x : %d, y : %d\n", xpos, ypos); }
    Point operator*(int times)
    {
        return Point(xpos * times, ypos * times);
    }
    friend Point operator*(int times, Point &ref);
};

Point operator*(int times, Point &ref)
{
    return Point(ref.xpos * times, ref.ypos * times);
}

int main(void)
{
    Point pos(1, 2);
    Point cpy;

    cpy = 3 * pos; // cpy = operator*(3, pos);
    cpy.ShowPosition();

    cpy = 2 * pos * 3; // cpy = (operator*(2, pos)).operator*(3);
    cpy.ShowPosition();

    return 0;
}