#include <iostream>

int main(void)
{
    int num1 = 10;
    int num2 = 20;
    const int* numPtr = &num1;
    std::cout << *numPtr << std::endl;
    numPtr = &num2;
    std::cout << *numPtr << std::endl;
    // error occured : readonly variable is not assignable
    // *numPtr = 30;
    // std::cout << *numPtr << std::endl;

    int* const numPtr2 = &num1;
    std::cout << *numPtr2 << std::endl;
    *numPtr2 = 30;
    std::cout << *numPtr2 << std::endl;
    // error occured : cannot assign to variable numPtr2 with const qualified type int *const
    // numPtr2 = &num2;
    // std::cout << *numPtr2 << std::endl;

    int* const & numPtr2Ref = numPtr2;
    std::cout << *numPtr2Ref << std::endl;

    const int* const numPtr3 = &num2;
    std::cout << *numPtr3 << std::endl;

    return 0;
}