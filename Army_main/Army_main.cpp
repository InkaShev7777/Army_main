#include <iostream>
using namespace std;
#include"Weapon.h"
#include"Sword.h"
#include"Spear.h"
#include"Arrow.h"
#include"Kolchan.h"
#include"Bow.h"
#include"Archer.h"
#include"Detachment.h"
int main()
{
	Weapon w;
	Sword s;
	Spear sp;
	Arrow a;
	Kolchan k;
	Bow b;
	Archer* ar = new Archer();
	//cout << ar->getHealth();
	Detachment* dd = new Detachment();
	dd->Add();
	dd->Add();
	dd->Add();
	dd->Add();
	dd->print();


}
