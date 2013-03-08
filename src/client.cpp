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
	cout << "You are currently " << statistics->calculateDescription(statistics->bodyMassIndex(height, weight), gender) << endl;
	cout << "your body surface area is " << statistics->bodySurfaceArea(height, weight) << endl;
	cout << "your body mass index is " << statistics->bodyMassIndex(height, weight) << endl;
	cout << "your lean mass index is " << statistics->leanMassIndex(height, weight, gender) << endl;
}

//void client::clientArrives(){
//	int customerArrival = 10;
//	double arrivalProbability = 1 / static_cast<double>(customerArrival);
//	double poissonValue = std::exp(-arrivalProbability);
//	int firstTime = 0;
//	int secondTime = 9;
//	int arrivalIntervals = 0;
//	int customersPerMinute[10];
//	int x = 0;
//	int y = 0;
//	int min = 8;
//	int max = 12;
//
//	while (x < 10){
//		customersPerMinute[x] = 0;
//		x++;
//	}
//
//
//	cout << "Probability of arrival is: " << arrivalProbability << endl;
//	cout << "Poisson Value is: " << poissonValue << endl;
//	srand(time(NULL));
//	while(arrivalIntervals < 101){
//		int throwDice = rand() % customerArrival;
//		if (throwDice < 10){
//			cout << "Customer arrived at time: 0" << throwDice << endl;
//		} else {
//			cout << "Customer arrived at time: " << throwDice << endl;
//		}
//		customerArrival = customerArrival + ((rand()/RAND_MAX*(max-min) + min));
//		if (throwDice < 10){
//			y = 0;
//		}else if (throwDice > 9 && throwDice < 20){
//			y = 1;
//		}else if (throwDice > 19 && throwDice < 30){
//			y = 2;
//		}else if (throwDice > 29 && throwDice < 40){
//			y = 3;
//		}else if (throwDice > 39 && throwDice < 50){
//			y = 4;
//		}else if (throwDice > 49 && throwDice < 60){
//			y = 5;
//		}else if (throwDice > 59 && throwDice < 70){
//			y = 6;
//		}else if(throwDice > 69 && throwDice < 80){
//			y = 7;
//		}else if (throwDice > 79 && throwDice < 90){
//			y = 8;
//		}else if (throwDice > 89 && throwDice < 100){
//			y = 9;
//		}
//		customersPerMinute[y] += 1;
//		arrivalIntervals = arrivalIntervals + 10;
//	}
//	for(int i=0; i<10; i++){
//		if (firstTime < 10 && secondTime < 10){
//			cout << "Time: 0" << firstTime << " - 0" << secondTime << " Customers: " << customersPerMinute[i] << endl;
//		} else {
//			cout << "Time: " << firstTime << " - " << secondTime << " Customers: " << customersPerMinute[i] << endl;
//		}
//		firstTime = secondTime + 1;
//		secondTime = secondTime + 10;
//	}
//}
