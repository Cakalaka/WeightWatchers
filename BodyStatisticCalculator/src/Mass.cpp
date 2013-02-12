/*
 * Mass.cpp
 *
 *  Created on: 7 Nov 2012
 *      Author: Christopher Kay
 */

#include "Mass.h"

double Mass::bodyMassIndex (double height, double weight, char gender){

	double bmi = weight/(pow(height, 2));

	return bmi;

	if (gender == 'M' && bmi < 20.7 || gender == 'F' && bmi < 19.1) {

		Description = "Underweight";
	}

	else if (gender == 'M' && bmi >= 20.7 && bmi <= 26.4 || gender == 'F' && bmi >= 19.1 && <= 25.8) {

		Description = "Ideal weight";
	}
	else if (gender == 'M' && bmi >= 26.4 && bmi <= 27.8 || gender == 'F' && bmi >= 25.8 && <= 27.3){

		Description = "Marginally overweight";
	}

	else if ( gender == 'M' && bmi >= 27.8 && bmi <= 31.1 || gender == 'F' && bmi >= 27.3 && <= 32.3) {

		Description = "Overweight";
	}

	else if ( gender == 'M' && bmi > 31.1 || gender == 'F' && bmi > 32.3) {

		Description = "Obese";
	}

}

Mass::Mass() {
	// TODO Auto-generated constructor stub

}

Mass::~Mass() {
	// TODO Auto-generated destructor stub
}


