#pragma once
#include "Weapon.h"
class Sword :
    public Weapon
{
public:
    Sword()
    {
        this->Uron = 40;
    }
    int Protection(Weapon& weapon)
    {
        return weapon.getUron() / 2;
    }
};

