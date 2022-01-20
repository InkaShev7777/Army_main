#pragma once
#include"Kolchan.h"
class Bow : public Weapon
{
	Kolchan* kolchan;
public:
	Bow()
	{
		this->kolchan = new Kolchan();
	}
	virtual int Atak()
	{
		return (Weapon::Atak() + (kolchan->GetArrow()->getUron()));
	}
};

