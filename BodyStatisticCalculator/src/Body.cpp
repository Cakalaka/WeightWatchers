/*
 * Body.cpp
 *
 *  Created on: 7 Nov 2012
 *      Author: Christopher Kay
 */

#include "Body.h"

double Body::bodySurfaceArea( double height, double weight ) {

	double bsa = std::sqrt ( height * weight / 3600 );

	return bsa;

}

Body::Body() {
	// TODO Auto-generated constructor stub
	cout << " Body Constructor called" << endl;
}

Body::~Body() {
	// TODO Auto-generated destructor stub
	cout << " Body Destructor called" << endl;

}

void Body::display() {
	cout<< "Display the body " << endl;
}



