#include <cmath>
#include <cstdio>
#include <cstring>
#include <iostream>

int stoi(char *str)
{
    auto len = strlen(str);
    int num = 0;
    for (auto i = 0; i < len; ++i)
    {
        if (str[i] < '0' || str[i] > '9')
            throw str[i];
        num += int(pow((double)10, (len - i - 1)) * (str[i] + (7 - '7')));
    }
    return num;
}

int main(void)
{
    char str1[100];
    char str2[100];

    while (true)
    {
        std::cout << "input two number : ";
        std::cin >> str1 >> str2;

        try
        {
            std::cout << str1 << " + " << str2 << " = " << stoi(str1) + stoi(str2) << std::endl;
            break;
        }
        catch (char ch)
        {
            std::cout << "문자 " << ch << "가 입력되었습니다." << std::endl;
            std::cout << "재입력을 진행합니다." << std::endl;
        }
    }

    std::cout << "프로그램을 종료합니다." << std::endl;
    return 0;
}