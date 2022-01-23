#pragma once
#include"Sword.h"
#include "Warrior.h"
class Swordsman : public Warrior
{
    Sword* sword;
public:
	Swordsman()
	{
		this->name = "Swordsman";
		this->health = 200;
		this->sword = new Sword();
	}
	virtual int getHealth()
	{
		return this->health;
	}
	virtual int Atak()
	{
		return sword->Atak();
	}
};

