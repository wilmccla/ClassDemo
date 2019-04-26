#include <iostream>
#include <string>
#include "Person.h"
#include "Bodyguard.h"
#include "Friend.h"
using namespace std;

int main ()
{
	cout << "Welcome to the Group!\n";

	Friend Steve;
	Bodyguard Stephany;

	Steve.HasGlasses = true;
	Steve.SetName("Steve Smith");
	Steve.LendMoney();

	Stephany.HasGlasses = false;
	Stephany.SetName("Stephany Singleton");

	string StevesName = Steve.GetName();
	Steve.Talk(StevesName + " says : My favorite ice cream is strawberry.");

	string StephanysName = Stephany.GetName();
	Stephany.Talk(StephanysName + " says : I am your bodyguard, watch this!");
	Stephany.Attack();

	system("pause");
	return 0;
}