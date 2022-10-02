#pragma once
#include "Vehicle.h"

struct Car : public Vehicle
{
    Car(const std::string& s);
    ~Car() override = default;

    void closeWindows();

    void tryToEvade() override;
};

