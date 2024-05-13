#ifndef __POINT_TEMPLATE_INCLUDED__
#define __POINT_TEMPLATE_INCLUDED__

#include <iostream>

template <typename T>
class Point
{
private:
    T xpos, ypos;

public:
    /**
     * @brief Construct a new Point object
     *
     * @param x
     * @param y
     */
    Point(T x, T y);

    /**
     * @brief Construct a new Point object
     *
     */
    Point() : xpos(0), ypos(0) {}

    /**
     * @brief show xpos, ypos information
     *
     */
    void ShowPosition() const;
};

template <typename T>
Point<T>::Point(T x, T y) : xpos(x), ypos(y) {}

template <typename T>
void Point<T>::ShowPosition() const
{
    std::cout << "[ " << xpos << ", " << ypos << " ]" << std::endl;
}

#endif