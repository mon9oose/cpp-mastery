#include <cstring>
#include <iostream>

#define BUFF_SIZE 20

int main(void) {
  char *buffer = new char[BUFF_SIZE];
  strcpy(buffer, "Hello, World!");
  std::cout << buffer << std::endl;
  delete[] buffer;
  return 0;
}
