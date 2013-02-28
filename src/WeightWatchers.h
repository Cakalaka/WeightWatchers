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
#include<string>

using namespace std;
using std::string;

double bodyMassIndex ( double height, double weight);
double bodySurfaceArea( double height, double weight);
double leanMassIndex ( double height, double weight, char gender);
string calculateDescription(double lmi, char gender);




#endif /* WEIGHTWATCHERS_H_ */
