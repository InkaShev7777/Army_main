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
#include"Swordsman.h"
#include"Rider.h"
#include"Fight.h"
int main()
{
	Detachment* otryad1 = new Detachment();
	Detachment* otryad2 = new Detachment();
	Swordsman* swordsman = new Swordsman();
	Rider* rider = new Rider();
	Archer* archer = new Archer();
	Fight* fight = new Fight(otryad1,otryad2);
	setlocale(0, "");
	int vibor;
	int v;
	int v2;
	do
	{
		cout << "\t\tМеню\n";
		cout << "1 - Добавить бойца\n";
		cout << "2 - Вывод информации о бойцах\n";
		cout << "3 - Бой\n";
		cout << "0 - Выход\n";
		cout << "Ваш выбор: ";
		cin >> vibor;
		switch (vibor)
		{
		case 1:
			system("cls");
			cout << "1 - Добавить солдата в первый отряд\n";
			cout << "2 - Добавить солдата во второй отряд\n";
			cout << "Ваш выбор: ";
			cin >> v;
			if (v == 1)
			{
				system("cls");
				cout << "1 - Добавить мечника\n";
				cout << "2 - Добавить всадника\n";
				cout << "3 - Добавить лучника\n";
				cin >> v2;
				if (v2 == 1)
				{
				otryad1->Add(swordsman);
				}
				if (v2 == 2)
				{
					otryad1->Add(rider);
				}
				if (v2 == 3)
				{
					otryad1->Add(archer);
				}
			}
			if (v == 2)
			{
				system("cls");
				cout << "1 - Добавить мечника\n";
				cout << "2 - Добавить всадника\n";
				cout << "3 - Добавить лучника\n";
				cin >> v2;
				if (v2 == 1)
				{
					otryad2->Add(swordsman);
				}
				if (v2 == 2)
				{
					otryad2->Add(rider);
				}
				if (v2 == 3)
				{
					otryad2->Add(archer);
				}
			}
			system("pause");
			system("cls");
			break;
		case 2:
			system("cls");
			cout << "1 - Перый отряд\n";
			cout << "2 - Второй отряд\n";
			cout << "3 - Инфрмация о всех отрядах\n";
			cin >> v;
			if (v == 1)
			{
				otryad1->print();
			}
			if (v == 2)
			{
				otryad2->print();
			}
			if (v == 3)
			{
				cout << "\tОтряд №1\n\n";
				otryad1->print();
				cout << "\n\n\n";
				cout << "\tОтряд №2\n\n";
				otryad2->print();
			}
			system("pause");
			system("cls");
			break;
		case 3:
			system("cls");
			fight->Atak();
			system("pause");
			system("cls");
			break;
		}
	} while (vibor != 0);
}
