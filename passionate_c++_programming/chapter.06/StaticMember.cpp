#include <iostream>

class SoSimple {
private:
    static int simObjCnt;

public:
    SoSimple() {
        simObjCnt++;
        std::cout << simObjCnt << "번째 SoSimple Object" << std::endl;
    }
};
int SoSimple::simObjCnt = 0;

class SoComplex {
private:
    static int cmxObjCnt;

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
int SoComplex::cmxObjCnt = 0;

int main(void) {
    SoSimple s1;
    SoSimple s2;

    SoComplex c1;
    SoComplex c2 = c1;
    SoComplex();

    return 0;
}