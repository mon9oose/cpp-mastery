#include <iostream>

/**
 * @brief devide 2 number
 *
 * @param int num1
 * @param int num2
 */
void Divide(int num1, int num2)
{
    if (num2 == 0)
        throw num2;
    std::cout << "나눗셈의 몫 : " << num1 / num2 << std::endl;
    std::cout << "나눗셈의 나머지 : " << num1 % num2 << std::endl;
}

int main(void)
{
    int num1, num2;
    std::cout << "input 2 numbers : ";
    std::cin >> num1 >> num2;

    try
    {
        Divide(num1, num2);
        std::cout << "나눗셈을 마쳤습니다." << std::endl;
    }
    catch (int expn)
    {
        std::cout << "분모에는 0이 올 수 없습니다." << std::endl;
        std::cout << "프로그램을 다시 실행해주세요." << std::endl;
    }

    return 0;
}