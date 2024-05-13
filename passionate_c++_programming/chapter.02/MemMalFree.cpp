#include <iostream>
#include <cstring>
#include <cstdlib>

char * MakeStrAddr(int len)
{
    char *str = (char *)malloc(sizeof(char)*len);
    return str;
}

int main(void)
{
    char *buffer = MakeStrAddr(20);
    strcpy(buffer, "Hello, World!");
    std::cout << buffer << std::endl;

    for(int i = 0; i <= 20; ++i)
    {
        if(!buffer[i]) break;
        std::cout << buffer[i];
    }
    std::cout << std::endl;

    free(buffer);
    return 0;
}