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
	int arrivalIntervals = 0;
	int customersPerMinute[10];

	cout << "Probability of arrival is: " << arrivalProbability << endl;
	cout << "Poisson Value is: " << poissonValue << endl;

	while(arrivalIntervals < 101){
		int throwDice = rand() % customerArrival;
		cout << "Customer arrived at time: " << throwDice << endl;
		customerArrival = customerArrival + 10;
		if (throwDice < 10){
			customersPerMinute[0] = customersPerMinute[0] + 1;
		}else if (throwDice > 9 && throwDice < 20){
			customersPerMinute[1] = customersPerMinute[1] + 1;
		}else if (throwDice > 19 && throwDice < 30){
			customersPerMinute[2] = customersPerMinute[2] + 1;
		}else if (throwDice > 29 && throwDice < 40){
			customersPerMinute[3] = customersPerMinute[3] + 1;
		}else if (throwDice > 39 && throwDice < 50){
			customersPerMinute[4] = customersPerMinute[4] + 1;
		}else if (throwDice > 49 && throwDice < 60){
			customersPerMinute[5] = customersPerMinute[5] + 1;
		}else if (throwDice > 59 && throwDice <70){
			customersPerMinute[6] = customersPerMinute[6] + 1;
		}else if(throwDice > 69 && throwDice < 80){
			customersPerMinute[7] = customersPerMinute[7] + 1;
		}else if (throwDice > 79 && throwDice < 90){
			customersPerMinute[8] = customersPerMinute[8] + 1;
		}else if (throwDice > 89 && throwDice < 100){
			customersPerMinute[9] = customersPerMinute[9] +1;
		}
		arrivalIntervals = arrivalIntervals + 10;
	}
	for(int i=0; i>10; i++){
		cout << "Time: " << firstTime << "- " << secondTime << "Customers: " << customersPerMinute[i] << endl;
		firstTime = secondTime + 1;
		secondTime = secondTime + 10;
	}
}
