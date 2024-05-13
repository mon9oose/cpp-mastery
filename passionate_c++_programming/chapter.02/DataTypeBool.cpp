#include <iostream>

template <typename T>
bool IsPositive(T num)
{
    if (num > 0) return true;
    return false;
}

int main(void)
{
    int num;
    std::cout << "Input Number : ";
    std::cin >> num;

    auto isPos = IsPositive(num);
    if (isPos) { std::cout << "Positive" << std::endl; }
    else { std::cout << "Negative" << std::endl; }

    return 0;
}