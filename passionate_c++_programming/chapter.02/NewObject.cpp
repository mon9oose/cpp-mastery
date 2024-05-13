#include <iostream>
#include <cstdlib>

class Simple
{
public:
    Simple() { std::cout << "Constructor!" << std::endl; }
};

int main(void)
{
    std::cout << "case 1 : ";
    Simple *sp1 = new Simple();

    std::cout << "case 2 : ";
    Simple *sp2 = (Simple*)malloc(sizeof(Simple) * 1);

    std::cout << std::endl << "end of main" << std::endl;
    delete sp1;
    free(sp2);

    return 0;
}