/**
 * @file PointClassTemplate.cpp
 * @author mon9oose (mon9ooose@gmail.com)
 * @brief
 * @version 0.1
 * @date 2024-05-07
 *
 * @copyright Copyright (c) 2024
 *
 */

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
  Point(T x, T y) : xpos(x), ypos(y) {}

  /**
   * @brief Show xpos, ypos information
   *
   */
  void ShowPosition() {
    std::cout << "[ " << xpos << ", " << ypos << " ]" << std::endl;
  }
};

int main(void) {
  Point<int> pos1(3, 4);
  pos1.ShowPosition();

  Point<double> pos2(2.4, 3.6);
  pos2.ShowPosition();

  Point<char> pos3('P', 'F');
  pos3.ShowPosition();
  return 0;
}