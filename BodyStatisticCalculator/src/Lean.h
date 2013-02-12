/*
 * Lean.h
 *
 *  Created on: 7 Nov 2012
 *      Author: Christopher Kay
 */

#ifndef LEAN_H_
#define LEAN_H_

#include <iostream>
using std::cout;
using std::endl;

#include <cmath>

class Lean {
public:
	Lean();
	virtual ~Lean();
	double leanMassIndex( double height, double weight, char gender);
};

#endif /* LEAN_H_ */
