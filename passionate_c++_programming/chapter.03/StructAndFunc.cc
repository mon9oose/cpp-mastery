#include <iostream>

struct Car {
  char id[20];
  int fuel;
  int speed;

  void ShowCarState() {
    std::cout << "id    : " << id << std::endl;
    std::cout << "fuel  : " << fuel << std::endl;
    std::cout << "speed : " << speed << std::endl;
  }
};

int main(void) {
  struct Car run99 = {"namename", 100, 0};
  run99.ShowCarState();
  return 0;
}