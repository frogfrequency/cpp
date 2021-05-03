
#pragma once

class Resident
{
    public:
        Resident(bool isChildComingOfAge); // constructor method
        
        int age;
        int buildingSkill;
        int woodWorkingSkill;


        void printStats(void);
};

