#include <cstdio>
#include <iostream>

int main(void) {
  /**
   *  0x1 02 03
   *  0000 0000 | 0000 0001 | 0000 0010 | 0000 0011
   */
  int num = 0x10203;
  char *ptr = reinterpret_cast<char *>(&num);
  for (auto i = 0; i < sizeof(num); ++i) {
    printf("%p\n", ptr + i);
    std::cout << static_cast<int>(*(ptr + i)) << std::endl;
  }
  return 0;
}