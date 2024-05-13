#include <iostream>

int main(void)
{
    const int num = 12;

    // 01. 포인터 변수를 선언하여 위 변수를 가르키게 함
    const int *ptrNum = &num;
    
    // 02. 이 포인터 변수를 참조하는 참조자를 하나 선언
    const int &refNum = num;

    // 03. 포인터 변수와 참조자를 이용하여 num에 저장된 값을 출력
    std::cout << *ptrNum << std::endl;
    std::cout << refNum << std::endl;

    return 0;
}