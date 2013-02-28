//============================================================================
// Name        : WeightWatchers.cpp
// Author      : Christopher Kay
// Version     :
// Copyright   :
// Description : Hello World in C++, Ansi-style
//============================================================================

#include "WeightWatchers.h"


int main() {
	double height, weight;
	char gender;
	//string description;

	struct personData{
		string name;
		double height;
		double weight;
		char gender;
	};

	personData data;

	cout << "Please enter your name: ";
	cin >> data.name;
	cout << "Hello " << data.name << ", please enter your height (in centimeters): ";
	cin >> data.height;
	cout << "Please enter you weight (in kilograms): ";
	cin >> data.weight;
	cout << "Please enter your gender (m/f): ";
	cin >> data.gender;
	cout << endl;

	height = data.height;
	weight = data.weight;
	gender = data.gender;

	cout << "You are currently " << calculateDescription(leanMassIndex(height, weight, gender), gender) << endl;
	cout << "your body surface area is " << bodySurfaceArea(height, weight) << endl;
	cout << "your body mass index is " << bodyMassIndex(height, weight) << endl;
	cout << "your lean mass index is " << leanMassIndex(height, weight, gender) << endl;

	return 0;
}


