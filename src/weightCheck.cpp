/*
 * weightCheck.cpp
 *
 *  Created on: 27 Feb 2013
 *      Author: christopher
 */

#include "weightWatchers.h"
#include "bodyStatistics.cpp"

string description;

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




