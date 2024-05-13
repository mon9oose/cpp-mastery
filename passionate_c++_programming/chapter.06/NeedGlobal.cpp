#include <iostream>

int simObjCnt = 0;
int cmxObjCnt = 0;

class SoSimple {
public:
    SoSimple() {
        simObjCnt++;
        std::cout << simObjCnt << "번째 SoSimple Object" << std::endl;
    }
};

class SoComplex {
public:
    SoComplex() {
        cmxObjCnt++;
        std::cout << cmxObjCnt << "번째 SoSimple Object" << std::endl;
    }
    SoComplex(SoComplex &cmx) {
        cmxObjCnt++;
        std::cout << cmxObjCnt << "번쨰 SoComplex Object" << std::endl;
    }
};

int main(void) {
    SoSimple s1;
    SoSimple s2;

    SoComplex c1;
    SoComplex c2 = c1;
    SoComplex();

    return 0;
}