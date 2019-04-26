#pragma once
#include <iostream>
#include <string>
using namespace std;

class Person
{
public:
	// Constructor : Method which runs once for each object created
	Person();

	void Talk(string WordsToTalk);
	void SetName(string name);
	string GetName();
	bool HasGlasses;

	// Destructor : Method which runs once for each object destroyed
	~Person();


private:
	string Name;
};

