#include "RacingCarClassBase.hpp"
#include <cstring>

void Car::InitMembers(char *id, int fuel)
{
    strcpy(userId, id);
    gauge = fuel;
    curSpeed = 0;
}

void Car::ShowCarState()
{
    std::cout << "User ID       : " << userId << std::endl;
    std::cout << "Gauge         : " << gauge << std::endl;
    std::cout << "Current Speed : " << curSpeed << std::endl;
}

void Car::Accel()
{
    if(gauge == 0) return;
    gauge = gauge - CAR::FUEL_STEP < 0 ? 0 : gauge - CAR::FUEL_STEP;
    curSpeed = curSpeed + CAR::ACC_STEP > CAR::MAX_SPEED ? CAR::MAX_SPEED : curSpeed + CAR::ACC_STEP;
}

void Car::Break()
{
    curSpeed = curSpeed - CAR::BRK_STEP < 0 ? 0 : curSpeed - CAR::BRK_STEP;
}