#pragma once
#include<iostream>
class Warrior
{
protected:
	std::string name;
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
	std::string getName()
	{
		return (std::string)this->name;
	}
};

