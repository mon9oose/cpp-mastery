#include <cstdlib>
#include <iostream>

namespace CAR {
enum {
  ID_LENGTH = 20,
  MAX_SPEED = 200,
  FUEL_STEP = 2,
  ACC_STEP = 10,
  BREK_STEP = 10
};
}

int main(void) {
  char *name = new char[CAR::ID_LENGTH];
  char data[] = "Hello, World!";

  strcpy(name, data);

  std::cout << data << std::endl;
  std::cout << name << std::endl;

  return 0;
}