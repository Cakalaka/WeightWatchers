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

void client::getGender(){
	WeightWatchers * crazyPointer = new WeightWatchers();
	gender = crazyPointer->gender;
	//return gender;
}
void client::display(){
	WeightWatchers * crazyPointer = new WeightWatchers();
	cout << height << endl;
	cout << weight << endl;
	cout << gender << endl;
	cout << "You are currently " << calculateDescription(leanMassIndex(height, weight, gender), gender) << endl;
	cout << "your body surface area is " << bodySurfaceArea(height, weight) << endl;
	cout << "your body mass index is " << bodyMassIndex(height, weight) << endl;
	cout << "your lean mass index is " << leanMassIndex(height, weight, gender) << endl;
}
