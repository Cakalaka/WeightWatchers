/*
 * bodyStatistics.cpp
 *
 *  Created on: 12 Feb 2013
 *      Author: Christopher
 */

#include "WeightWatchers.h"

double bmi, bsa, lmi;
double heightBy100Sqrd, weightSqrd;

//calculates your body mass index
double WeightWatchers::bodyMassIndex ( double height, double weight) {
	bmi = weight/(pow(height / 100, 2));
	return bmi;
}

//calculates your body surface area
double WeightWatchers::bodySurfaceArea( double height, double weight) {
	bsa = sqrt((height * weight) / 3600);
	return bsa;
}

//calculates your lean mass index
double WeightWatchers::leanMassIndex ( double height, double weight, char gender) {
	heightBy100Sqrd =  pow((100 * (height/100)), 2);
	weightSqrd = pow(weight, 2);
	if (gender == 'M'|| gender == 'm') {
		lmi = (1.10 * weight) - (128 * (weightSqrd/heightBy100Sqrd));
	} else if (gender =='F'|| gender == 'f') {
		lmi = (1.07 * weight) - (148 * weightSqrd/heightBy100Sqrd);
	}

	return lmi;
}

//calculates whether you are obese, overweight, etc based on the result of your bmi
string WeightWatchers::calculateDescription(double bmi, char gender) {
	string description;
	if (gender == 'M'|| gender == 'm') {
		if (bmi < 20.7) {
			description = "underweight";
		} else if (bmi >= 20.7 && bmi < 26.4){
			description = "ideal weight";
		} else if (bmi >= 26.4 && bmi < 27.8){
			description = "marginally overweight";
		} else if (bmi >= 27.8 && bmi < 31.1){
			description = "overweight";
		} else if (bmi >= 31.1){
			description = "obese";
		}
	} else if (gender =='F'|| gender == 'f') {
		if (bmi < 19.1){
			description = "underweight";
		} else if (bmi >= 19.1 && bmi < 25.8){
			description = "ideal weight";
		} else if (bmi >= 25.8 && bmi < 27.3 ){
			description = "marginally overweight";
		} else if (bmi >= 27.3 && bmi < 32.3){
			description = "overweight";
		} else if (bmi >= 32.3){
			description = "obese";
		}
	}
	return description;
}
