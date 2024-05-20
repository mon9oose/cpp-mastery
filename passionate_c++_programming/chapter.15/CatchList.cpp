#include <cmath>
#include <cstdio>
#include <cstring>
#include <iostream>

namespace advance {
int atoi(char* str) throw(char, int) {
  int length = strlen(str);
  int num = 0;

  if (length != 0 && str[0] == '\0') throw 0;

  for (auto i = 0; i < length; ++i) {
    if (str[i] < '0' || str[i] > '9') throw str[i];
    num += (int)pow((double)10, length - i - 1) * (str[i] - '0');
  }
  return num;
}
}  // namespace advance

int main(void) {
  char str1[100];
  char str2[100];

  while (true) {
    std::cout << "input two number : ";
    std::cin >> str1 >> str2;

    try {
      std::cout << str1 << " + " << str2 << " = "
                << advance::atoi(str1) + advance::atoi(str2) << std::endl;
      break;
    } catch (char ch) {
      std::cout << "문자 " << ch << "가 입력되었습니다." << std::endl;
      std::cout << "다시 입력해주세요." << std::endl;
    } catch (int expn) {
      if (expn == 0)
        std::cout << "0으로 시작하는 숫자는 입력 불가." << std::endl;
      else
        std::cout << "비정상적 입력이 이루어졌습니다." << std::endl;
      std::cout << "다시 입력해주세요." << std::endl;
    }
  }
  std::cout << "프로그램을 종료합니다." << std::endl;
  return 0;
}