/*
 * WeightWatchers.h
 *
 *  Created on: 12 Feb 2013
 *      Author: christopher
 */

#ifndef WEIGHTWATCHERS_H_
#define WEIGHTWATCHERS_H_

#include<iostream>
#include<cmath>
#include"client.h"

using namespace std;

class WeightWatchers{
public:
	WeightWatchers();
	virtual ~WeightWatchers();
	double height, weight;
	char gender;
};

double bodyMassIndex ( double height, double weight);
double bodySurfaceArea( double height, double weight);
double leanMassIndex ( double height, double weight, char gender);
string calculateDescription(double lmi, char gender);
void display();
struct personData{
		string name;
		double height;
		double weight;
		char gender;
	};




#endif /* WEIGHTWATCHERS_H_ */
