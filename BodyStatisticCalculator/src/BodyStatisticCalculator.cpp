//============================================================================
// Name        : BodyStatisticCalculator.cpp
// Author      : Christopher Kay
// Version     :
// Copyright   : Bob
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

#include <cmath>

#include "BodyStatisticsCalculator.h"
#include "body.h"
#include "mass.h"
#include "lean.h"

int main() {
	cout << "Hello Christopher" << endl; // prints Hello Christopher

	int weight;
	double height;
	char gender;

	height = 1.75;
	weight = 77.0;
	gender = 'f';

	if (gender == 'm') {

		gender = 'M';
	}

	if (gender == 'f') {

		gender = 'F';
	}

	if (gender != 'M' && gender != 'F') {

		cout << "According to the information that has been entered, You are not male or female" << endl;
		cout << "Please enter correct information" << endl;
	}

	else {

	Body body;
	body.display();
	cout << "Body Surface Area Is " << body.bodySurfaceArea( height, weight ) << endl;

	Mass mass;
	cout << "Body Mass Index Is " << mass.bodyMassIndex(height, weight) << endl;

	Lean lean;
	cout << "Lean Mass Index Is " << lean.leanMassIndex(height, weight, gender) << endl;

	}

	//WeightWatch( int, double, char );

/*
	double bsa = bodySurfaceArea( 1.75, 77.0 );

	cout << "Body Surface Area Is " << bsa << " square meters" << endl;
*/
	return 0;
}

double bodySurfaceArea( double height, double weight ) {

	double bsa = std::sqrt ( height * weight / 3600 );

	return bsa;

}

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

 double leanMassIndex (double height, double weight, char gender) {

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


