#include <iostream>

class Point
{
private:
    int xpos, ypos;

public:
    /**
     * @brief Construct a new Point object
     *
     * @param x
     * @param y
     */
    Point(int x = 0, int y = 0) : xpos(x), ypos(y) {}

    friend std::ostream &operator<<(std::ostream &s, const Point &p)
    {
        s << "[ " << p.xpos << ", " << p.ypos << " ]" << std::endl;
        return s;
    }
};

class PointArray
{
private:
    Point *_list;
    int _length;
    PointArray(const PointArray &arr) {}
    PointArray &operator=(const PointArray &arr) {}

public:
    /**
     * @brief Construct a new Point Array object
     *
     * @param n
     */
    PointArray(int n) : _length(n)
    {
        _list = new Point[_length];
    }

    ~PointArray()
    {
        delete[] _list;
    }

    /**
     * @brief
     *
     * @param index
     * @return Point&
     */
    Point &operator[](int index)
    {
        if (index < 0 || index >= _length)
            exit(1);
        return _list[index];
    }

    Point operator[](int index) const
    {
        if (index < 0 || index >= _length)
            exit(1);
        return _list[index];
    }

    int GetLength() const { return _length; }
};

int main(void)
{
    PointArray arr(3);
    arr[0] = Point(3, 4);
    arr[1] = Point(5, 6);

    for (auto i = 0; i < 3; ++i)
        std::cout << arr[i] << std::endl;

    return 0;
}