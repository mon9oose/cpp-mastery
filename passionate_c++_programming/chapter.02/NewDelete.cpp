#include <iostream>
#include <cstring>

int main(void)
{
    auto buffer = new char[20];
    strcpy(buffer, "Hello, World!");
    std::cout << buffer << std::endl;
    delete []buffer;
    return 0;
}