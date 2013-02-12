/*
 * Lean.cpp
 *
 *  Created on: 7 Nov 2012
 *      Author: Christopher Kay
 */

#include "Lean.h"

double Lean::leanMassIndex(double height, double weight, char gender) {

	double weightSqrd, heightBy100Sqrd;

	weightSqrd = pow(weight, 2);
	heightBy100Sqrd = pow((100 * height), 2);

	if (gender == 'M') {

		double lmi = (1.10 * weight) - (128 * (weightSqrd/heightBy100Sqrd));

		return lmi;
	}
	else if (gender == 'F') {

		double lmi = (1.07 * weight) - (148 * weightSqrd/heightBy100Sqrd);

		return lmi;
	}
	else {
		cout << "According to the information that you have entered you are neither male nor female" << endl;
	}
}

Lean::Lean() {
	// TODO Auto-generated constructor stub

}

Lean::~Lean() {
	// TODO Auto-generated destructor stub
}

