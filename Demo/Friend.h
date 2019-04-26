#pragma once
#include "Person.h"
class Friend :
	public Person
{
public:
	Friend();

	void LendMoney();

	~Friend();
};

