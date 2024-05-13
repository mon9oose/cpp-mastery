#include <iostream>

int main(void)
{
    int num1 = 2010;
    std::cout << "num1 Addr : " << &num1 << ", value : " << num1 << std::endl;
    
    int &num2 = num1;
    std::cout << "num2 Addr : " << &num2 << ", value : " << num2 << std::endl;
    
    int *numPtr = &num1;
    std::cout << "numPtr Addr : " << &numPtr << ", value : " << numPtr << ", point value : " << *numPtr << std::endl;

    return 0;
}