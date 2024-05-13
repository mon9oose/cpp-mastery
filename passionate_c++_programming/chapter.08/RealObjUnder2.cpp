#include <iostream>

struct Data
{
    int data;
    void (*ShowData)(Data *);
    void (*Add)(Data *, int);
};

void ShowData(Data *THIS)
{
    std::cout << "data : " << THIS->data << std::endl;
}

void Add(Data *THIS, int num)
{
    THIS->data += num;
}

using Data = struct Data;

int main(void)
{
    Data d1 = {15, ShowData, Add};
    Data d2 = {7, ShowData, Add};

    d1.Add(&d1, 17);
    d2.Add(&d2, 9);
    d1.ShowData(&d1);
    d2.ShowData(&d2);

    return 0;
}