//============================================================================
// Name        : WeightWatchers.cpp
// Author      : Christopher Kay
// Version     :
// Copyright   :
// Description : Hello World in C++, Ansi-style
//============================================================================

#include "WeightWatchers.h"


int main() {
	double weight, height;
	char gender;
	string description;

	struct personData{
		double height;
		double weight;
		double gender;
	};

	personData foo, bar;
	personData rumple = {175, 77, 'f'};

	foo.height = 175;
	foo.weight = 77;
	foo.gender = 'm';

	cout << "Enter a person's height, weight and gender: " ;
	cin >> bar.height >> bar.weight >> bar.gender;
	cout << endl;

	cout << "Foo's data is : " << foo.height << " : "
			<< foo.weight << " : "
			<< foo.gender << endl;

	cout << "Bar's data is : " << bar.height << " : "
			<< bar.weight << " : "
			<< bar.gender << endl;

	cout << "Rumple's data is : " << rumple.height << " : "
			<< rumple.weight << " : "
			<< rumple.gender << endl;

	//height = 175;
	//weight = 77;
	//gender = 'm';

	//cout << "Body surface area is " << bodySurfaceArea(height, weight) << endl;
	//cout << "Body mass index is " << bodyMassIndex(height, weight) << endl;
	//cout << "Lean mass index is " << leanMassIndex(height, weight, gender) << endl;
	//cout << "You are currently " << description << endl;

	cout << "Hello Christopher" << endl; // prints Hello Christopher
	return 0;
}
