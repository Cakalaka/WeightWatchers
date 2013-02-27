/*
 * bodyStatistics.cpp
 *
 *  Created on: 12 Feb 2013
 *      Author: christopher
 */

#include<cmath>
#include<string>

#include "WeightWatchers.h"

double bmi, bsa, lmi;
string description;

double bodyMassIndex ( double height, double weight) {
	bmi = weight/(pow(height / 100, 2));
	return bmi;
}

double bodySurfaceArea( double height, double weight) {
	bsa = sqrt((height * weight) / 3600);
	return bsa;
}

double leanMassIndex ( double height, double weight, char gender) {
	double heightBy100Sqrd, weightSqrd;
	heightBy100Sqrd =  pow((100 * height), 2);
	weightSqrd = pow(weight, 2);

	if (gender == 'M'|| gender == 'm') {
		lmi = (1.10 * weight) - (128 * (weightSqrd/heightBy100Sqrd));
	} else if (gender =='F'|| gender == 'f') {
		lmi = (1.07 * weight) - (148 * weightSqrd/heightBy100Sqrd);
	}
	return lmi;
}

void weightCheckM(){
	if (lmi < 20.7) {
		description = "underweight";
	} else if (lmi > 20.7 && lmi < 26.4){
		description = "ideal weight";
	} else if (lmi > 26.4 && lmi < 27.8){
		description = "marginally overweight";
	} else if (lmi > 27.8 && lmi < 31.1){
		description = "overweight";
	} else if (lmi > 31.1){
		description = "obese";
	}
}
