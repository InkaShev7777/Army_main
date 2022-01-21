#pragma once
#include"Horse.h"
#include "Warrior.h"
#include"Spear.h"
class Rider : public Warrior
{
	Horse* hors;
	Spear* spear;
public:
	Rider()
	{
		this->health = 100;
		this->hors = new Horse();
		this->spear = new Spear();
	}
	virtual int getHealth()
	{
		return this->health;
	}
	int Atak()
	{
		return spear->Atak();
	}
};

