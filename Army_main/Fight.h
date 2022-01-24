#include"Detachment.h"
#pragma once
class Fight
{
	Detachment* otr1;
	Detachment* otr2;
public:
	Fight()
	{
		this->otr1 = new Detachment();
		this->otr2 = new Detachment();
	}
	Fight(Detachment* otr1, Detachment* otr2)
	{
		this->otr1 = otr1;
		this->otr2 = otr2;
	}
	virtual void Atak()
	{
		//otr1->Atak();
	}
};

