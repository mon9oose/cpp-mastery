#include <iostream>

class FruitSeller
{
private:
    int applePrice;
    int numOfApples;
    int money;

public:
    FruitSeller()
    {
        this->applePrice = 0;
        this->numOfApples = 0;
        this->money = 0;
    }
    ~FruitSeller(){}

    void InitMembers(int price, int num, int money)
    {
        this->applePrice = price;
        this->numOfApples = num;
        this->money = money;
    }
    void SaleApples(int money)
    {
        int num = money / this->applePrice;
    }
};