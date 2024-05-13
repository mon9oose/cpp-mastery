#include <iostream>

class Point;
class PointOP
{
private:
    int opcnt;

public:
    PointOP() : opcnt(0) {}
    ~PointOP()
    {
        std::cout << "Operation Times : " << opcnt << std::endl;
    }

    Point PointAdd(const Point &, const Point &);
    Point PointSub(const Point &, const Point &);
};

class Point
{
private:
    int x;
    int y;

public:
    Point(const int &xpos, const int &ypos): x(xpos), y(ypos) {}

    /**
     * @brief Point 내부 x와 y를 더하는 함수 ( friend 선언이 되어 있기 떄문에 Point 객체의 private memeber variables에 접근 가능함 )
     * 
     * @return Point 
     */
    friend Point PointOP::PointAdd(const Point &, const Point &);
    friend Point PointOP::PointSub(const Point &, const Point &);
    friend void ShowPointPos(const Point &);
};

Point PointOP::PointAdd(const Point &p1, const Point &p2)
{
    opcnt++;
    return Point(p1.x + p2.x, p1.y + p2.y);
}

Point PointOP::PointSub(const Point &p1, const Point &p2)
{
    opcnt++;
    return Point(p1.x - p2.x, p1.y - p2.y);
}

void ShowPointPos(const Point &p)
{
    std::cout << "x : " << p.x << std::endl;
    std::cout << "y : " << p.y << std::endl;
}

int main(void)
{
    Point p1(1, 2);
    Point p2(2, 4);

    PointOP op;
    ShowPointPos(op.PointAdd(p1, p2));
    ShowPointPos(op.PointSub(p1, p2));

    return 0;
}