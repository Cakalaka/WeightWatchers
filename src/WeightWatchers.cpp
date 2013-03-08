//============================================================================
// Name        : WeightWatchers.cpp
// Author      : Christopher Kay
// Version     :
// Copyright   :
// Description : Hello World in C++, Ansi-style
//============================================================================

#include "WeightWatchers.h"


int main() {
	//creating a new pointer
	client * pWeight = new client();
	//creating a data structure to hold the clients information
	personData data;

	//allows the client to enter their information
	cout << "Please enter your name: ";
	cin >> data.name;
	cout << "Hello " << data.name << ", please enter your height (in centimeters): ";
	cin >> data.height;
	cout << "Please enter you weight (in kilograms): ";
	cin >> data.weight;
	cout << "Please enter your gender (m/f): ";
	cin >> data.gender;
	cout << endl;

	//using the pointer that we have just created we will now transfer the information that we have just entered to the client class
	pWeight->height = data.height;
	pWeight->weight = data.weight;
	pWeight->gender = data.gender;

	//runs the display within the client class
	pWeight->display();
//	pWeight->clientArrives();

	return 0;
}

WeightWatchers::WeightWatchers(){
	height = 0;
	weight = 0;
}

WeightWatchers::~WeightWatchers(){

}
