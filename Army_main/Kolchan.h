#pragma once
#include"Arrow.h"
struct Node
{
	Node* next;
	Arrow* arrow;
	Node()
	{
		this->arrow = new Arrow();
		this->next = nullptr;
	}
	Node(Node* node)
	{
		next = nullptr;
		arrow = node->arrow;
	}

};
class Kolchan
{
	int capacity;
	Node* head;
	void Add()
	{
		Node* tmp = this->head;
		if (tmp == nullptr)
		{
			tmp = new Node();
			this->head = tmp;
		}
		else
		{
			while (tmp->next!= nullptr)
			{
				tmp = tmp->next;
			}
			tmp->next = new Node();
			tmp->next->next = nullptr;
		}
	}
public:
	Kolchan()
	{
		this->capacity = 12;
		this->head = nullptr;

		init();
	}
	Arrow* GetArrow()
	{
		Node* tmp = this->head;
		Node* forDel = new Node(tmp);
		this->head = tmp->next;
		delete tmp;
		return forDel->arrow;
	}
	virtual void init() {
		for (int i = 0; i < this->capacity; i++)
		{
			Add();
		}
	}
};

