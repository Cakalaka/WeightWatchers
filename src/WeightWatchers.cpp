//============================================================================
// Name        : WeightWatchers.cpp
// Author      : Christopher Kay
// Version     :
// Copyright   :
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "WeightWatchers.h"


int main() {
	double weight, height;
	char gender;

	height = 1.75;
	weight = 77;
	gender = 'm';

	cout << "Body surface area is " << bodySurfaceArea(height, weight) << endl;
	cout << "Body mass index is " << bodyMassIndex(height, weight) << endl;
	cout << "Lean mass index is " << leanMassIndex(height, weight, gender) << endl;

	cout << "Hello Christopher" << endl; // prints Hello Christopher
	return 0;
}
