#include <iostream>

class Point
{
private:
    int xpos, ypos;

public:
    Point(int x = 0, int y = 0) : xpos(x), ypos(y) {}
    void ShowPosition()
    {
        std::cout << xpos << ", " << ypos << std::endl;
    }
    // 전위증가
    Point &operator++()
    {
        xpos += 1;
        ypos += 1;
        return *this;
    }
    // 후위증가
    const Point operator++(int)
    {
        const Point tmp(*this);
        xpos += 1;
        ypos += 1;
        return tmp;
    }
};

/**
 * @brief 후위증가에 const 객체를 반환하는 이유는, const 객체는 const 멤버변수만 호출할 수 있는데, (obj++)++을 막기위함이다.
 *
 */