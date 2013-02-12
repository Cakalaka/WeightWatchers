/*
 * Mass.h
 *
 *  Created on: 7 Nov 2012
 *      Author: Christopher Kay
 */

#ifndef MASS_H_
#define MASS_H_

#include <iostream>
using std::cout;
using std::endl;

#include <cmath>

class Mass {
public:
	Mass();
	virtual ~Mass();
	double bodyMassIndex( double height, double weight, char gender);
	string Description;
};

#endif /* MASS_H_ */
