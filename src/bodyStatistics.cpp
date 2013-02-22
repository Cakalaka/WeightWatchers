/*
 * bodyStatistics.cpp
 *
 *  Created on: 12 Feb 2013
 *      Author: christopher
 */

#include<cmath>
#include "WeightWatchers.h"

double bodyMassIndex ( double height, double weight) {
	double bmi = weight/(pow(height, 2));
	return bmi;
}

double bodySurfaceArea( double height, double weight) {
	double bsa = sqrt((height * weight) / 360);
	return bsa;
}

double leanMassIndex ( double height, double weight, char gender) {
	double heightBy100Sqrd, weightSqrd, lmi;
	heightBy100Sqrd = heightBy100Sqrd = pow((100 * height), 2);
	weightSqrd = pow(weight, 2);

	if (gender == 'M'|| gender == 'm') {
		lmi = (1.10 * weight) - (128 * (weightSqrd/heightBy100Sqrd));
	} else if (gender =='F'|| gender == 'f') {
		lmi = (1.07 * weight) - (148 * weightSqrd/heightBy100Sqrd);
	}
	return lmi;
}



