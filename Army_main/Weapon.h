#pragma once
class Weapon
{
protected:
	int Uron;
public:
	Weapon()
	{
		this->Uron = 50;
	}
	int getUron()
	{
		return this->Uron;
	}
	virtual int Atak()
	{
		return this->Uron;
	}

};

