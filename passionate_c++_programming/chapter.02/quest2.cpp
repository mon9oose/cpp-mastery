#include <iostream>
#include <ctime>
#include <cstdlib>

int main(void)
{
    srand(time(NULL));
    for(int i = 0 ; i < 5 ; ++i)
    {
        printf("number #%d : %d\n", i, rand() % 100);
    }
    return 0;
}