#include "Person.h"
#include <iostream>
#include <string>
using namespace std;



Person::Person()
{
	cout << "Someone has been born" << endl;
}

void Person::Talk(string Words)
{
	cout << Words << endl;
}

void Person::SetName(string name)
{
	Name = name;
}

string Person::GetName()
{
	return Name;
}


Person::~Person()
{
}
