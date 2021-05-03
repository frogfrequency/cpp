
#include <iostream>

#include <string>

#include <cstdlib> // primarly to get the randomness going
#include <ctime> // to be able to seed srand with different seed each time

#include "Resident.h"


using namespace std;


// have Residents have a random name from an extern File with female and male names

int main()
{
    srand((unsigned)time(0)); // seeding rand


    Resident frank(true);
    Resident oldMan(false);
    frank.printStats();
    oldMan.printStats();

    cout << "\n\n\nBye World!\n";
}


    //srand((unsigned)time(NULL)); // seeding srand with time

    //Resident billy, tony;
    //billy.name = "Billy";
    //billy.woodWorkingSkill = 3;
    //billy.buildingSkill = 8;

    //tony.name = "Tony";
    //tony.woodWorkingSkill = 13;
    //tony.buildingSkill = 18;


    //billy.printStats();
    //tony.printStats();
