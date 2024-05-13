#pragma once
#include <iostream>

namespace CAR
{
    enum
    {
        LEN = 20,
        MAX_SPEED = 200,
        FUEL_STEP = 2,
        ACC_STEP = 10,
        BRK_STEP = 10
    };
}

class Car
{
private:
    char userId[CAR::LEN];
    int gauge;
    int curSpeed;

public:
    void InitMembers(char *id, int fuel);
    void ShowCarState();
    void Accel();
    void Break();
};