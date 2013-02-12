/*
 * Body.h
 *
 *  Created on: 7 Nov 2012
 *      Author: Christopher Kay
 */

#ifndef BODY_H_
#define BODY_H_

#include <iostream>
using std::cout;
using std::endl;

#include <cmath>

class Body {
public:
	Body();
	virtual ~Body();
	void display();
	double bodySurfaceArea( double height, double weight );
};

#endif /* BODY_H_ */
