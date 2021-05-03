#include <iostream>

#include "Resident.h"

using namespace std;

Resident::Resident(bool isChildComingOfAge)
{
	if (isChildComingOfAge) {
		age = rand() % 3 + 12;
		buildingSkill = 3 + rand() % 8;
		woodWorkingSkill = 3 + rand() % 8;
	}
	else {
		age = rand() % 40 + 12;
		buildingSkill = age/4 + rand() % (age/3*2);
		woodWorkingSkill = age/4 + rand() % (age/3*2);
	}
}

void Resident::printStats(void)
{

	cout << "\n\tage: " << age;
	cout << "\n\tbuilding skill: " << buildingSkill;
	cout << "\n\twoodworking skill: " << woodWorkingSkill;

}