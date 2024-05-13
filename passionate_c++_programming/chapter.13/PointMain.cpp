#include "PointTemplate.h"

int main(void) {
  Point<int> pos1(3, 4);
  pos1.ShowPosition();

  Point<double> pos2(3.4, 5.5);
  pos2.ShowPosition();

  return 0;
}