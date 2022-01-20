#pragma once
#include "Weapon.h"
class Spear :
    public Weapon
{
    int length;
public:
	Spear()
	{
		this->length = 2;
		this->Uron = 40;
	}
	virtual int Atak()
	{
		return Weapon::Atak() * (this->length / 2);
	}
};

