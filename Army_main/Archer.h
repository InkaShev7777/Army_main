#pragma once
#include"Bow.h"
#include "Warrior.h"
class Archer : public Warrior
{
	Bow* bow;
public:
	Archer()
	{
		this->health = 150;
		this->bow = new Bow();
	}
	virtual int getHealth()
	{
		return this->health;
	}
	int Atak()
	{
		return bow->Atak();
	}
};

