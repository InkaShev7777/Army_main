#pragma once
#include<iostream>
#include"Warrior.h";
struct Node_1
{
	Node_1* next;
	Warrior* warrior;
	Node_1()
	{
		this->next = nullptr;
		this->warrior = new Warrior();
	}
	Node_1(Warrior* war,Node_1* next)
	{
		this->warrior = war;
		this->next = NULL;
		
	}
};
class Detachment
{
	Node_1* head;
public:
	void Add(Warrior* war)
	{
		Node_1* tmp = this->head;
		if (tmp == nullptr)
		{
			tmp = new Node_1(war,nullptr);
			this->head = tmp;
		}
		else
		{
			while (tmp->next != nullptr)
			{
				tmp = tmp->next;
			}
			tmp->next = new Node_1(war,nullptr);
			tmp->next->next = nullptr;
		}
	}
	int Atak()
	{
		return 1;
	}
	void print()
	{
		Node_1* tmp = this->head;
		while (tmp!= nullptr)
		{
			std::cout << "Soldier: " << tmp->warrior->getName() << "\tHealth: " << tmp->warrior->getHealth() << "\n";
			tmp = tmp->next;
		}
	}
};

