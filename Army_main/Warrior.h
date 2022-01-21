#pragma once
class Warrior
{
protected:
	int health;
public:
	Warrior()
	{
		this->health = 200;
	}
	virtual int getHealth()
	{
		return this->health;
	}
};

