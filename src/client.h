/*
 * client.h
 *
 *  Created on: 1 Mar 2013
 *      Author: Christopher
 */

#ifndef CLIENT_H_
#define CLIENT_H_

using namespace std;

#include"WeightWatchers.h"

class client {
public:
	string name;
	double height;
	double weight;
	char gender;
	client();
	virtual ~client();
	void getGender();
	void display();
//	void clientArrives();
};

/* namespace std */
#endif /* CLIENT_H_ */
