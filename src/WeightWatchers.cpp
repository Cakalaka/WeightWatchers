//============================================================================
// Name        : WeightWatchers.cpp
// Author      : Christopher Kay
// Version     :
// Copyright   :
// Description : Hello World in C++, Ansi-style
//============================================================================

#include "WeightWatchers.h"


int main() {
	client * pWeight = new client();
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

	pWeight->height = data.height;
	pWeight->weight = data.weight;
	pWeight->gender = data.gender;

	pWeight->display();

	return 0;
}

WeightWatchers::WeightWatchers(){
	height = 0;
	weight = 0;
}

WeightWatchers::~WeightWatchers(){

}
