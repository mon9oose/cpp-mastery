#include <iostream>

#define ID_MAX_LENGTH 20
#define MAX_SPEED     200
#define FUEL_STEP     2
#define ACC_STEP      10
#define BRK_STEP      10

struct Car
{
    char userId[ID_MAX_LENGTH];
    int fuelGauge;
    int speed;
};

void ShowCarState(const struct Car &c)
{
    std::cout << "id    : " << c.userId << std::endl;
    std::cout << "gauge : " << c.fuelGauge << std::endl;
    std::cout << "speed : " << c.speed << std::endl;
}

void Accel(struct Car &c)
{
    if(c.fuelGauge <= 0) return;    
    c.fuelGauge -= FUEL_STEP;
    c.speed = (c.speed + ACC_STEP) > MAX_SPEED ? MAX_SPEED : c.speed + ACC_STEP;
}

void Break(struct Car &c)
{
    c.speed = (c.speed - BRK_STEP) < 0 ? 0 : c.speed - BRK_STEP;
}

int main(void)
{
    struct Car run99 = {"run99", 100, 0};
    Accel(run99);
    Accel(run99);
    ShowCarState(run99);
    Break(run99);
    ShowCarState(run99);

    return 0;
}