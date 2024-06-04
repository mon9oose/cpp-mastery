#include <iostream>

#define ID_MAX_LENGTH 20
#define MAX_SPEED 200
#define FUEL_STEP 2
#define ACC_STEP 10
#define BRK_STEP 10

typedef struct _Car {
  char _id[ID_MAX_LENGTH];
  int _fuel;
  int _speed;
} Car;

void ShowCarState(const Car &c) {
  std::cout << "id    : " << c._id << std::endl;
  std::cout << "gauge : " << c._fuel << std::endl;
  std::cout << "speed : " << c._speed << std::endl;
}

void Accel(Car &c) {
  if (c._fuel <= 0) return;
  c._fuel -= FUEL_STEP;
  c._speed =
      (c._speed + ACC_STEP) > MAX_SPEED ? MAX_SPEED : c._speed + ACC_STEP;
}

void Break(Car &c) {
  c._speed = (c._speed - BRK_STEP) < 0 ? 0 : c._speed - BRK_STEP;
}

int main(void) {
  Car run99 = {"run99", 100, 0};
  Accel(run99);
  Accel(run99);
  ShowCarState(run99);
  Break(run99);
  ShowCarState(run99);
  return 0;
}