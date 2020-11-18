#pragma once
#include "Vehicle.h"

struct SemiTruck : public Vehicle
{
    SemiTruck(const std::string& s);

    ~SemiTruck() override;
    SemiTruck(const SemiTruck&);
    SemiTruck& operator = (const SemiTruck&);
    
    void honkHorn();
    void pullOver();
};
