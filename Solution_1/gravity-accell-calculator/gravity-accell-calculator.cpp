

#include <iostream>
#include "constants.h"

using namespace std;


double getTowerHeight() {
	double number{};
	cout << "enter tower height in meters: \n";
	cin >> number;
	return number;
}

double returnBallHeight(int time, double towerHeight) {
	double ballHeight = towerHeight - time * gravity / 2 * time;
	return ballHeight;
}

void printHeight(int seconds, double theHeight) {
	if (0 < theHeight) {
		cout << "After " << seconds << " seconds, the ball is " << theHeight << " above the ground.\n";
	}
	else {
		cout << "The ball is on the floor.\n";
	}
}

void calculateAndPrintHeight(int pastSeconds, double towerHeight) {
	printHeight(pastSeconds, returnBallHeight(pastSeconds, towerHeight));
}


int main()
{
	const double towerHeight{ getTowerHeight() };


	calculateAndPrintHeight(0, towerHeight);
	calculateAndPrintHeight(1, towerHeight);
	calculateAndPrintHeight(2, towerHeight);
	calculateAndPrintHeight(3, towerHeight);
	calculateAndPrintHeight(4, towerHeight);
	calculateAndPrintHeight(5, towerHeight);
	calculateAndPrintHeight(10, towerHeight);


	return 0;
}
