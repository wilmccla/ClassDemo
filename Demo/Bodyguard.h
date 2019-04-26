#pragma once
#include "Person.h"
class Bodyguard :
	public Person
{
public:
	Bodyguard();

	void Attack();

	~Bodyguard();
};

