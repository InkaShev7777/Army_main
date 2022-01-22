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
	Node_1(Node_1* node)
	{
		
		node->next = nullptr;
		warrior = node->warrior;
	}
};
class Detachment
{
	Node_1* head;
public:
	void Add()
	{
		Node_1* tmp = this->head;
		if (tmp == nullptr)
		{
			tmp = new Node_1();
			this->head = tmp;
		}
		else
		{
			while (tmp->next != nullptr)
			{
				tmp = tmp->next;
			}
			tmp->next = new Node_1();
			tmp->next->next = nullptr;
		}
	}
	void Atak()
	{

	}
	void print()
	{
		Node_1* tmp = this->head;
		while (tmp!= nullptr)
		{
			std::cout << tmp << "\t" << (*tmp).warrior << "\t" << tmp->next<<"\n";
			tmp = tmp->next;
		}
	}
};

