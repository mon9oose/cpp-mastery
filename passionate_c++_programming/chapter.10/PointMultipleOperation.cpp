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
};

int main(void)
{
    Point pos(1, 2);
    Point cpy;

    cpy = pos * 3; // cpy = pos.operator*(3);
    cpy.ShowPosition();

    cpy = pos * 3 * 2; // cpy = (pos.operator*(3)).operator*(2);
    cpy.ShowPosition();
    return 0;
}