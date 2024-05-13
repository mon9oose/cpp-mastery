#include <iostream>

int main(void)
{
    int num1, num2;
    std::cout << "두 개의 숫자 입력";
    std::cin >> num1 >> num2;

    try
    {
        /* code */
        if (num2 == 0)
            throw num2;
        std::cout << "나눗셈의 몫 : " << num1 / num2 << std::endl;
        std::cout << "나눗셈의 나머지 : " << num1 % num2 << std::endl;
    }
    catch (int num)
    {
        std::cout << "분모의 숫자는 " << num << "이 될 수 없습니다." << std::endl;
        std::cout << "프로그램을 다시 시작해주세요." << std::endl;
    }
    std::cout << "end of main" << std::endl;
    return 0;
}