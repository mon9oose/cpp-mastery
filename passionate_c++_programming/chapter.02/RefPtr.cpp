#include <iostream>

int main(void)
{
    int num = 12;          // int형 데이터를 가지는 변수
    int &ref = num;        // int형 데이터를 가지는 변수의 참조자

    int *numPtr = &num;    // int형 데이터를 가지는 변수의 주소를 저장하는 변수
    int *&pRef = numPtr; // int형 데이터를 가지는 변수의 주소를 저장하는 변수의 참조자

    int **numDPtr = &numPtr;
    int **&dpRef = numDPtr;

    std::cout << ref << std::endl;
    std::cout << *pRef << std::endl;
    std::cout << **dpRef << std::endl;

    return 0;
}