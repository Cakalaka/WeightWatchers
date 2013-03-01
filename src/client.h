/*
 * client.h
 *
 *  Created on: 1 Mar 2013
 *      Author: christopher
 */

#ifndef CLIENT_H_
#define CLIENT_H_

namespace std {

class client {
private:
	string name;
	double height;
	double weight;
	char gender;
public:
	client();
	virtual ~client();
	void display();
};

} /* namespace std */
#endif /* CLIENT_H_ */
