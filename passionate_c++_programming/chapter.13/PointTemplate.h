#ifndef __POINT_TEMPLATE_INCLUDED__
#define __POINT_TEMPLATE_INCLUDED__

#include <iostream>

template <typename T>
class Point {
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
   * @brief Show xpos, ypos information
   *
   */
  void ShowPosition();
};

template <typename T>
Point<T>::Point(T x, T y) : xpos(x), ypos(x) {}

template <typename T>
void Point<T>::ShowPosition() {
  std::cout << "[ " << xpos << ", " << ypos << " ]" << std::endl;
}

#endif