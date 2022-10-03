#include "SemiTruck.h"
#include <iostream>

SemiTruck::SemiTruck(const std::string& n) : Vehicle(n) {}

SemiTruck::~SemiTruck() = default;

void SemiTruck::pullOver() 
{
    std::cout << name << ": sorry officer, was I driving too slow?" << std::endl;
    setSpeed(0);
}

void SemiTruck::drivePrettySlow()
{
    std::cout << name << ": drivin' pretty slow!" << std::endl;
    setSpeed(45);
}


