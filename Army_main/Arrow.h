#pragma once
#include "Weapon.h"
class Arrow :
    public Weapon
{
    double length;
public:
	Arrow()
	{
		this->Uron = 25;
		this->length = 0.65;
	}
};

