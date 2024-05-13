#include <iostream>

int main(void)
{
    int num1, num2;
    std::cout << "두 개의 숫자 입력";
    std::cin >> num1 >> num2;

    std::cout << "나눗셈의 몫 : " << num1 / num2 << std::endl;
    std::cout << "나눗셈의 나머지 : " << num1 % num2 << std::endl;
}