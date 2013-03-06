/*
 * client.cpp
 *
 *  Created on: 1 Mar 2013
 *      Author: Christopher
 */

#include "WeightWatchers.h"
#include "client.h"

using namespace std;

client::client() {
	// TODO Auto-generated constructor stub

}

client::~client() {
	// TODO Auto-generated destructor stub
}

/* namespace std */

void client::display(){
	WeightWatchers * statistics = new WeightWatchers();
	cout << height << endl;
	cout << weight << endl;
	cout << gender << endl;
	cout << "You are currently " << statistics->calculateDescription(statistics->leanMassIndex(height, weight, gender), gender) << endl;
	cout << "your body surface area is " << statistics->bodySurfaceArea(height, weight) << endl;
	cout << "your body mass index is " << statistics->bodyMassIndex(height, weight) << endl;
	cout << "your lean mass index is " << statistics->leanMassIndex(height, weight, gender) << endl;
}

void client::clientArrives(){
	int customerArrival = 10;
	double arrivalProbability = 1 / static_cast<double>(customerArrival);
	double poissonValue = std::exp(-arrivalProbability);
	int firstTime = 0;
	int secondTime = 9;

	cout << "probability of arrival is: " << arrivalProbability << endl;

	while(customerArrival < 101){
		int throwDice = rand() % customerArrival;
		cout << "Time: " << firstTime << " - " << secondTime << " customers: " << throwDice << endl;
		customerArrival = customerArrival + 10;
		firstTime = secondTime + 1;
		secondTime = secondTime + 10;
	}
}
